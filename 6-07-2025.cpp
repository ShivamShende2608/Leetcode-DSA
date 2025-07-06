// Problem: Mark and Toys
// Source: HackerRank

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maximumToys(vector<int> prices, int k) {
    sort(prices.begin(), prices.end()); // Sort toy prices
    int count = 0;

    for (int price : prices) {
        if (k >= price) {
            k -= price; // Buy toy, reduce money
            count++;    // Increase toy count
        } else {
            break;      // Stop if money is not enough
        }
    }

    return count;
}

int main() {
    vector<int> prices = {1, 12, 5, 111, 200, 1000, 10};
    int k = 50;

    cout << maximumToys(prices, k) << endl; // Expected Output: 4
    return 0;
}

