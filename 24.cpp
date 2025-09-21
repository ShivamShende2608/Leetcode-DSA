#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to parse space-separated integers from a string
vector<int> parseArray(const string &line) {
    vector<int> arr;
    stringstream ss(line);
    int x;
    while(ss >> x) arr.push_back(x);
    return arr;
}

// Function to find maximum sum contiguous subarray using Kadane's Algorithm
int maxSubarraySum(const vector<int> &arr) {
   int sum=0;
   int maxlen= 0;
   
   for(int i=0 ; i< arr.size(); i++){
       sum=max(arr[i], sum+arr[i]);
       maxlen=max(maxlen, sum);
   }
   return maxlen;
}

int main() {
    string line;

    cout << "Enter array elements (space-separated): ";
    getline(cin, line);
    vector<int> arr = parseArray(line);

    int maxSum = maxSubarraySum(arr);

    cout << "Maximum sum of contiguous subarray: " << maxSum << endl;

    return 0;
}
