#include <bits/stdc++.h>
using namespace std;

int main() {
    int semesters;
    cout << "Enter number of semesters: ";
    cin >> semesters;

    for (int i = 1; i <= semesters; i++) {
        int subjects;
        cout << "Enter number of subjects in semester " << i << ": ";
        cin >> subjects;

        if (subjects <= 0) {
            cout << "Invalid number of subjects." << endl;
            return 0;
        }

        int maxMark = INT_MIN;
        for (int j = 0; j < subjects; j++) {
            int mark;
            do {
                cout << "Enter marks of subject " << j+1 << " (0-100): ";
                cin >> mark;
                if (mark < 0 || mark > 100) cout << "Invalid mark, try again.\n";
            } while (mark < 0 || mark > 100);

            maxMark = max(maxMark, mark);
        }

        cout << "Maximum mark in semester " << i << ": " << maxMark << endl;
    }
    return 0;
}
