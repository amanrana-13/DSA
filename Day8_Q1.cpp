// Question Link - https://leetcode.com/problems/move-zeroes/description/
// Question Name - Move Zeroes

#include<iostream>
using namespace std;
#include<vector>
class Solution {
    public:
        void moveZeroes(vector<int>& arr) {
            int n = arr.size();
            for (int i = 0; i < n - 1; i++) {
                for (int j = 0; j < n - 1 - i; j++) {
                    if (arr[j] == 0) {
                        swap(arr[j], arr[j + 1]);
                    }
                }
            }
        }
    };

// Time Complexity - O(n^2)
// Space Complexity - O(1)