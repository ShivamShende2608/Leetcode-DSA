#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

vector<int> parseArray(const string &line) {
   vector<int>arr;
   stringstream ss (line);
   int x;
   while(ss >> x)arr.push_back(x);
   return arr;
}

vector<int> mergeSortedArrays(const vector<int> &a, const vector<int> &b) {
    vector<int>result;
    int i=0 , j=0;
    int n=a.size() , m =b.size();
    while(i<n && j<m){
        if(a[i]<=a[j]){
          result.push_back(a[i]);
          i++;
        }else{
            result.push_back(b[j]);
            j++;
        }
    }
    
    while(i < n) result.push_back(a[i++]);
    while(j < m) result.push_back(b[j++]);
    
    return result;
   
}

int main() {
    string line;
    cout << "Enter first sorted array (space-separated): ";
    getline(cin, line);
    vector<int> arr1 = parseArray(line);

    cout << "Enter second sorted array (space-separated): ";
    getline(cin, line);
    vector<int> arr2 = parseArray(line);

    vector<int> merged = mergeSortedArrays(arr1, arr2);

    cout << "Merged Array: ";
    for (int val : merged) cout << val << " ";
    cout << endl;

    return 0;
}
