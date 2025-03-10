// Question 2
// Question Link - https://leetcode.com/problems/sort-colors/description/
// Question Name - Sort Colors
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int n = nums.size();
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (nums[j] > nums[j + 1])
                {
                    swap(nums[j], nums[j + 1]);
                }
            }
        }
    }
};

// Time Complexity - O(n^2)
// Space Complexity - O(1)