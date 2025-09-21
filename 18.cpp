#include <iostream>
#include <string>
#include <sstream>
#include <unordered_set>
using namespace std;

int lengthOfLongestSubstring(const string &s) {
   unordered_set<char>seen;
   int left=0 , maxlen=0;
   
   for(int right=0; right < s.length(); right++){
       while(seen.find(s[right])!= seen.end()){
           seen.erase(s[left]);
           left++;
       }
       
       seen.insert(s[right]);
       maxlen=max(maxlen, right-left+1);
   }
   return maxlen;
}

int main() {
    string line;
    cout << "Enter string: ";
    getline(cin, line);
    
    int result = lengthOfLongestSubstring(line);
    cout << "Length of longest substring without repeating characters: " << result << endl;
    
    return 0;
}
