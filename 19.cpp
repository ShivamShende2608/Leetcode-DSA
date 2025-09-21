#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <unordered_set>
using namespace std;

// Function to parse space-separated integers from a string
vector<int> parseArray(const string &line) {
   vector<int>arr;
    stringstream ss(line);
    int x;
    while(ss >> x) arr.push_back(x);
    return arr;
}

// Function to find duplicates in the array
vector<int> findDuplicates(const vector<int> &arr) {
    unordered_set<int> seen;      // store unique numbers seen so far
    unordered_set<int> duplicates; // store duplicates
    for(int x : arr) {
       if(seen.find(x)!=seen.end()){
           duplicates.insert(x);
       }else{
           seen.insert(x);
       }                   // first time → add to seen
    }
    return vector<int>(duplicates.begin(), duplicates.end());
}

int main() {
    string line;

    cout << "Enter array elements (space-separated): ";
    getline(cin, line);
    vector<int> arr = parseArray(line);

    vector<int> duplicates = findDuplicates(arr);

    cout << "Duplicates: ";
    for(int x : duplicates) cout << x << " ";
    cout << endl;

    return 0;
}
