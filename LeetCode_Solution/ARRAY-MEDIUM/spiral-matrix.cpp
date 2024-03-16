/*Given an m x n matrix, return all elements of the matrix in spiral order.



Example 1:


Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]
Example 2:


Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
Output: [1,2,3,4,8,12,11,10,9,5,6,7]
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> Order(vector<vector<int>> &matrix)
    {

        int n = matrix.size();    // 3
        int m = matrix[0].size(); // 4

        int left = 0;
        int right = m - 1;

        int top = 0;
        int bottom = n - 1;

        vector<int> result;
        while (left <= right && top <= bottom)
        {
            for (int i = left; i <= right; i++)
            {
                result.push_back(matrix[top][i]); // print 1st column
            }
            top++;
            for (int i = top; i <= bottom; i++)
            {
                result.push_back(matrix[i][right]);
            }
            right--;
            if (top <= bottom)
            {
                for (int i = right; i >= left; i--)
                {
                    result.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            if (left <= right)
            {
                for (int i = bottom; i >= top; i--)
                {
                    result.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return result;
    }
};
int main()
{
    Solution sol;
    vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    vector<int> ans = sol.Order(matrix);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}
