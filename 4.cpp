#include <iostream>
using namespace std;

// Function to calculate the equation
int solveEquation(int a, int b, int c) {
    // Equation: a^3 + a^2b + 2a^2b + 2ab^2 + ab^2 + b^3
    int result =
        (a*a*a)+(a*a*b)+(2*a*a*b)+(2*a*b*b)+(a*b*b)+(b*b*b);
        
        return result;
}

int main() {
    int a, b, c;
    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;
    cout << "Enter value of c: ";
    cin >> c;  // c is given as input but equation doesn't use it
    
    int answer = solveEquation(a, b, c);
    
    cout << "Result of the equation: " << answer << endl;
    return 0;
}
