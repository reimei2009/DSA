//
// Created by ADMIN on 11/18/2024.
//
#include <math.h>
#include <vector>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyPrice = prices[0];
        int profit = 0;
        for (int i = 0 ; i < prices.size() ; i++){
            if (prices[i] < buyPrice){
                buyPrice = prices[i];
            }
            profit = max(profit, prices[i] - buyPrice);
        }
        return profit;
    }
};
