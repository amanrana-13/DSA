// Question Link - https://leetcode.com/problems/flipping-an-image/?envType=problem-list-v2&envId=array
// Question Name - Flipping an Image
#include <vector>
#include <iostream>
#include <algorithm>

class Solution
{
public:
    std::vector<std::vector<int>> flipAndInvertImage(std::vector<std::vector<int>> &image)
    {
        int n = image.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n / 2; j++)
            {
                swap(image[i][j], image[i][n - j - 1]);
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (image[i][j] == 0)
                {
                    image[i][j] = 1 - image[i][j];
                }
                else
                {
                    image[i][j] = 0;
                }
            }
        }
        return image;
    }
};
