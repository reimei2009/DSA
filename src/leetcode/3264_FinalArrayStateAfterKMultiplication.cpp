//
// Created by ADMIN on 11/18/2024.
//

#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        while(k--) *min_element(nums.begin(),nums.end()) *= multiplier;
        return nums;
    }
};
