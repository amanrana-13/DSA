// Question - 704 - Binary Search
// Question Link - https://leetcode.com/problems/binary-search/description/
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
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


// Question - 34 - Find First and Last Position of Element in Sorted Array
// Question Link - https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/

// Time Complexity - O()
// Space Complexity - O()


// Question - 35 - Search Insert Position
// Question Linl - https://leetcode.com/problems/search-insert-position/description/
class Solution {
    public:
        int searchInsert(vector<int>& nums, int target) {
            int n = nums.size();
            int left = 0;
            int right = n - 1;
            while (left <= right) {
                int mid = left + (right - left)/ 2;
    
                if (nums[mid] == target) {
                    return mid;
                } else if (target > nums[mid]) {
                    left = mid + 1;
                } else
                    right = mid - 1;
            }
            return left;
        }
    };

// Time Complexity - O(log n)
// Space Complexity - O(1)