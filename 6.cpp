#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> findFactors(int n) {
  vector<int>factor;
  
  if(n==0) return factor;
   n=abs(n);
   
   for(int i=1 ; i<=n;i++){
       if(n%i==0) 
       factor.push_back(i);
   }
   return factor;
}

int main() {
    string line;
    cout << "Enter a number: ";
    getline(cin, line);
    int n = stoi(line);
    
    if (n == 0) {
        cout << "No factors" << endl;
        return 0;
    }
    
    vector<int> factors = findFactors(n);
    
    cout << "Factors of " << abs(n) << ": ";
    for (int i = 0; i < factors.size(); i++) {
        cout << factors[i];
        if (i < factors.size() - 1) cout << ", ";
    }
    cout << endl;
    
    return 0;
}
