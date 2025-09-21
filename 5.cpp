#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main() {
    int n; // number of dealerships
    cout << "Enter number of dealerships: ";
    cin >> n;
    cin.ignore(); // clear newline

    vector<pair<int,int>> data(n); // store cars and bikes for each dealership

    for (int i = 0; i < n; i++) {
        cout << "Enter cars and bikes in dealership " << i+1 << ": ";
        string line;
        getline(cin, line); // read line
        stringstream ss(line);
        int cars, bikes;
        ss >> cars >> bikes;
        data[i] = {cars, bikes};
    }

    for (int i = 0; i < n; i++) {
        int tyres = data[i].first * 4 + data[i].second * 2; // cars=4 tyres, bikes=2 tyres
        cout << "Total number of tyres in dealership " << i+1 << ": " << tyres << endl;
    }

    return 0;
}
