// Question Link - https://leetcode.com/problems/rotate-array/description/
// Question Name - Rotate Array

#include <iostream>
#include <vector>
#include <algorithm>
class Solution
{
public:
    void rotate(std::vector<int> &nums, int k)
    {
        int n = nums.size();
        k = k % n;
        std::rotate(nums.begin(), nums.begin() + n - k, nums.end());
    }
};

// Time Complexity - O(n)
// Space Complexity - O(1)