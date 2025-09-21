#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Function to count valleys
int countValleys(const string &steps) {
    int level=0;
    int valleys=0;
    
    for(char step :steps){
        if(step == 'U') level++;
        else if(step == 'D')   level--;
        
        if(step == 'U' && level==0 ) valleys++;
    }
    return valleys;
}

int main() {
    string line;
    cout << "Enter number of steps: ";
    getline(cin, line); // read number of steps (not used directly)
    
    cout << "Enter steps sequence (U/D): ";
    getline(cin, line); // read sequence as string

    int valleys = countValleys(line);

    cout << "Number of Valleys: " << valleys << endl;

    return 0;
}
