#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

// Function to parse space-separated integers from a string
vector<int> parseArray(const string &line) {
    vector<int> arr;
    stringstream ss(line);
    int x;
    while(ss >> x) arr.push_back(x);
    return arr;
}

// Function to find the majority element using Moore's Voting Algorithm
int majorityElement(const vector<int> &arr) {
    int candidate=0, count=0;
      for(int num : arr){
          if(count==0) candidate=num;
          
          if(num==candidate){
             count++;
          }else{
              count--;
          }
          
          
     }
     return candidate;
}

int main() {
    string line;

    cout << "Enter array elements (space-separated): ";
    getline(cin, line);
    vector<int> arr = parseArray(line);

    int majority = majorityElement(arr);

    cout << "Majority Element: " << majority << endl;

    return 0;
}
