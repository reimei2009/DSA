//
// Created by ADMIN on 11/18/2024.
//

#include <string>
using namespace std;

class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.length() != goal.length()){
            return false;
        }
        return (s + s).find(goal) != string::npos;
    }
};
