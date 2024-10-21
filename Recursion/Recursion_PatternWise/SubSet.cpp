#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>>ans;
    void powerSubsets(vector<int> &nums, vector<int> &temp, int i)
    {
        if (i >= nums.size())
        {
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        powerSubsets(nums, temp, i + 1); // take
        temp.pop_back();
        powerSubsets(nums, temp, i + 1); // not take
    }
    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<int> temp;
        powerSubsets(nums, temp, 0);
        return ans;
    }
};
int main()
{
    Solution sol;
    vector<int>nums = {1, 2, 2};
    vector<vector<int>>ans = sol.subsets(nums);
    cout << "{";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << "{";
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << ",";
        }
        cout << "}";
    }
    cout << "}";
    return 0;
}