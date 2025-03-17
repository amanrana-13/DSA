// Question - 153 - Find Minimum in Rotated Sorted Array
// Question Link - https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

// Time Complexity - O()
// Space Complexity - O()

// Question - 33. Search in Rotated Sorted Array
// Question Link - https://leetcode.com/problems/search-in-rotated-sorted-array/

class Solution {
    public:
        int search(vector<int>& nums, int target) {
            int n = nums.size();
            for (int i = 0; i < n; i++) {
                if (nums[i] == target) {
                    return i;
                }
            }
            return -1;
        }
    };

// Time Complexity - O(n)
// Space Complexity - O(1)
