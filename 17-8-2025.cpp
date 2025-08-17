#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0, ten = 0; // track count of $5 and $10 bills

        for (int bill : bills) {
            if (bill == 5) {
                // Customer pays exact amount
                five++;
            } 
            else if (bill == 10) {
                // Need to give $5 as change
                if (five > 0) {
                    five--;
                    ten++;
                } else {
                    return false; // can't give change
                }
            } 
            else { // bill == 20
                // Best: give 10 + 5 as change
                if (ten > 0 && five > 0) {
                    ten--;
                    five--;
                } 
                else if (five >= 3) { // Otherwise give 3 fives
                    five -= 3;
                } 
                else {
                    return false; // can't give change
                }
            }
        }
        return true;
    }
};
