#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

// Function to find first non-repeated character
char firstNonRepeatedChar(const string &s) {
    unordered_map<char,int>freq;
     
    for(char c:s){
        freq[c]++;
    }
    
    for(char c: s){
        if(freq[c]==1)return c;
    }
    
    return '\0';
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    char result = firstNonRepeatedChar(input);

    if (result != '\0')
        cout << "First non-repeated character: " << result << endl;
    else
        cout << "No non-repeated character found" << endl;

    return 0;
}
