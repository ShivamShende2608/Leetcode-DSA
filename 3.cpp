#include <iostream>
#include <string>
#include <sstream>
#include <unordered_map>
using namespace std;

// Function to count frequency of each number
unordered_map<int,int> countFrequency(const string &line) {
  // write your code here
  unordered_map<int,int>freq;
  stringstream ss(line);
  int num;
   while(ss >> num){
       freq[num]++;
       
   }
   return freq;
 
}

int main() {
    string line;
    cout << "Enter number of elements: ";
    getline(cin, line); // read n (not strictly needed)
    
    cout << "Enter elements (space-separated): ";
    getline(cin, line); // read array elements as string

    unordered_map<int,int> freq = countFrequency(line);

    cout << "Frequencies:" << endl;
    for(auto &p : freq) {
        cout << p.first << " occurs " << p.second << " times" << endl;
    }

    return 0;
}
