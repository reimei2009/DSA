//
// Created by ADMIN on 11/18/2024.
//
#include <string>
using namespace std;
class Solution {
public:
    bool checkIfPangram(string sentence) {
        int count[256] = {0};
        for (char c : sentence){
            count[c] = 1;
        }
        bool isPangram = true;
        for (int i = 97 ; i <= 122 ; i++){
            if (count[i] == 0 ){
                isPangram = false;
                break;
            }
        }
        return isPangram;
    }
};
