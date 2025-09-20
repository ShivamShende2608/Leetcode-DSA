#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

void findDuplicates(string s) {
    unordered_set<char> seen;
    unordered_set<char> dup;

    for (char c : s) {
        if (seen.find(c) == seen.end()) {
            seen.insert(c);
        } else {
            dup.insert(c);
        }
    }

    for (char d : dup) cout << d << " ";
    cout << endl;
}

int main() {
    string str = "programming";
    findDuplicates(str);
    return 0;
}
