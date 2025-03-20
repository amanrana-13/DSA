// Question - 14. Longest Common Prefix
// Question Link - https://leetcode.com/problems/longest-common-prefix/description/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        int n = strs.size();
        sort(strs.begin(), strs.end());
        string firstStr = strs[0];
        string lastStr = strs[n - 1];
        vector<char> first(firstStr.begin(), firstStr.end());
        vector<char> last(lastStr.begin(), lastStr.end());
        string result = "";
        int minLength = min(first.size(), last.size());
        for (int i = 0; i < minLength; i++)
        {
            if (first[i] == last[i])
            {
                result += first[i];
            }
            else
                break;
        }
        return result;
    }
};

// Time Complexity - O(n log n)
// Space Complexity - O(M) M - maximum length of the strings in the input vector

// Question - 242. Valid Anagram
// Question Link - https://leetcode.com/problems/longest-common-prefix/description/

// Time Complexity - O()
// Space Complexity - O()