#include <iostream>
#include <sstream>
#include <vector>
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

// Function to check if two matrices are identical
bool areIdentical(const vector<vector<int>> &A, const vector<vector<int>> &B) {
   if(A.size() != B.size() || A[0].size() != B[0].size())return false;
   
   for(int i=0; i < A.size(); i++){
       for(int j=0; j < A[0].size();j++){
           if(A[i][j]!=B[i][j])return false;
       }
   }
   return true;
}

int main() {
    int rows, cols;
    cout << "Enter rows and columns of matrices: ";
    cin >> rows >> cols;
    cin.ignore(); // clear newline

    cout << "Enter Matrix A:\n";
    vector<vector<int>> A = parseMatrix(rows, cols);

    cout << "Enter Matrix B:\n";
    vector<vector<int>> B = parseMatrix(rows, cols);

    if (areIdentical(A, B)) {
        cout << "Matrices are identical" << endl;
    } else {
        cout << "Matrices are not identical" << endl;
    }

    return 0;
}
