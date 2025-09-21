#include <iostream>
#include <vector>
using namespace std;

// Function to generate all Pythagorean triplets less than a given limit
vector<vector<int>> generatePythagoreanTriplets(int limit) {
    vector<vector<int>> triplets;

    for (int a = 1; a < limit; a++) {
        for (int b = a; b < limit; b++) {
            int c2 = a * a + b * b;
            int c = 1;
            while (c * c < c2) c++;
            if (c * c == c2 && c < limit) {
                triplets.push_back({a, b, c});
            }
        }
    }

    return triplets;
}

int main() {
    string line;
    cout << "Enter limit for Pythagorean triplets: ";
    getline(cin, line);
    int limit = stoi(line);

    vector<vector<int>> triplets = generatePythagoreanTriplets(limit);

    cout << "Pythagorean triplets less than " << limit << ":" << endl;
    for (const auto& triplet : triplets) {
        cout << triplet[0] << " " << triplet[1] << " " << triplet[2] << endl;
    }

    return 0;
}
