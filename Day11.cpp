// Question - 118 - Pascal Triangle
// Question Link - https://leetcode.com/problems/pascals-triangle/description/
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
    public:
        vector<vector<int>> generate(int numRows) {
            vector<vector<int>> ans;
            if (numRows == 0) {
                return ans;
            }
            for (int i = 0; i < numRows; ++i) {
                vector<int> row(i + 1, 1);
                for (int j = 1; j < i; ++j) {
                    row[j] = ans[i - 1][j - 1] + ans[i - 1][j];
                }
                ans.push_back(row);
            }
            return ans;
        }
    };

// Time Complexity - O(n^2)
// Space Complexity - O(n^2)


// Question - 48 - Rotate Image 
// Question Link - https://leetcode.com/problems/rotate-image/description/

class Solution {
    public:
        void rotate(vector<vector<int>>& matrix) {
            int n = matrix.size();
            for (int i = 0; i < n - 1; i++) {
                for (int j = i + 1; j < n; j++) {
                    swap(matrix[i][j], matrix[j][i]);
                }
            }
            for (int i = 0; i < n; i++) {
                reverse(matrix[i].begin(),matrix[i].end());
            }
        }
    };



// Time Complexity - O()
// Space Complexity - O()


// Question - 54 - Spiral Image 
// Question Link - https://leetcode.com/problems/spiral-matrix/description/

// Time Complexity - O()
// Space Complexity - O()