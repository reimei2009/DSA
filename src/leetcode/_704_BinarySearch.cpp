//
// Created by ADMIN on 11/18/2024.
//

#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int left = 0 ;
        int right = n -1;
        while (left <= right){
            int mid = left + (right - left) /2;
            if (nums[mid] == target ){
                return mid;
            }
            else if (target < nums[mid]){
                right = mid -1;
            }
            else if (target > nums[mid]){
                left = left + 1;
            }
        }
        return -1;
    }
};
