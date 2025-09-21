#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
const char illegal = '\0';

char firstNonRepeated(const string &s) {
    
    //unorderd indicates "not found"
    unordered_map<char,int>freq;
    
    for(char c:s){
        freq[c]++;
    }
    
    for(char c :s){
        if(freq[c]==1)return c;
    }
    return illegal;
}

int main() {
    string str = "swiss";
    char ans = firstNonRepeated(str);
    if (ans != illegal) cout << ans << endl;
    else cout << "No non-repeated character" << endl;
    return 0;
}
