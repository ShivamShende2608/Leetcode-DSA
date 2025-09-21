#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to parse a matrix from input lines
vector<vector<int>> parseMatrix(int rows, int cols) {
    vector<vector<int>> matrix(rows, vector<int>(cols));
    for (int i = 0; i < rows; i++) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        for (int j = 0; j < cols; j++) {
            ss >> matrix[i][j];
        }
    }
    return matrix;
}

// Function to rotate a matrix by 90 degrees clockwise
vector<vector<int>> rotateMatrix(vector<vector<int>> &matrix) {
   int n= matrix.size();
   
   for(int i=0 ; i< n;i++){
       for(int j=i ; j < n; j++){
           swap(matrix[i][j], matrix[j][i]);
       }
   }
   
   for(int i=0 ; i<n ;i++) reverse(matrix.begin(), matrix.end());
   
   return matrix;
}

int main() {
    int n;
    cout << "Enter size of square matrix (n x n): ";
    cin >> n;
    cin.ignore(); // clear newline

    cout << "Enter Matrix:\n";
    vector<vector<int>> matrix = parseMatrix(n, n);

    vector<vector<int>> rotated = rotateMatrix(matrix);

    cout << "Rotated Matrix (90 degrees clockwise):\n";
    for (int i = 0; i < rotated.size(); i++) {
        for (int j = 0; j < rotated[0].size(); j++) {
            cout << rotated[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
