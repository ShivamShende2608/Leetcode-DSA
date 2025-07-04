// HackerRank - Gemstones

#include <iostream>
#include <vector>
#include <set>
using namespace std;

int gemstones(vector<string> arr) {
    vector<int> freq(26, 0);

    for (string rock : arr) {
        set<char> uniqueElements;
        for (char c : rock)
            uniqueElements.insert(c);

        for (char c : uniqueElements)
            freq[c - 'a']++;
    }

    int count = 0;
    for (int i = 0; i < 26; i++) {
        if (freq[i] == arr.size())
            count++;
    }

    return count;
}

int main() {
    int n;
    cin >> n;

    vector<string> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << gemstones(arr) << endl;
    return 0;
}
