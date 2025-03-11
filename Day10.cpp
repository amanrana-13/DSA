// Question 3
// Question Link - https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
// Question Name - Best Time to Buy and Sell Stock
#include <stdio.h>
#include <vector>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int n = prices.size();
        int profit = 0;
        int mini = prices[0];
        for (int i = 1; i < n; i++)
        {
            int cost = prices[i] - mini;
            profit = max(profit, cost);
            mini = min(mini, prices[i]);
        }
        return profit;
    }
};

// Time Complexity - O(n)
// Space Complexity - O(1)