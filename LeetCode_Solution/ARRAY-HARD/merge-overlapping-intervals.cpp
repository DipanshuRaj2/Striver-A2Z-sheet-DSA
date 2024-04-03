#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        sort(intervals.begin(), intervals.end());
        int n = intervals.size();

        vector<vector<int>> ans;
        for (int i = 0; i < n; i++)
        {
            if (ans.empty())
            {
                ans.push_back(intervals[i]);
            }
            else
            {
                vector<int> &v = ans.back();
                int y = v[1];

                if (intervals[i][0] < y)
                {
                    v[1] = max(y, intervals[i][1]);
                }

                else
                {
                    ans.push_back(intervals[i]);
                }
            }
        }
        return ans;
    }
};
int main()
{
    Solution sol;
    vector<vector<int>> nums = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};

    vector<vector<int>> ans  = sol.merge(nums);

    for(auto ele: ans){
        for(auto it: ele){
            cout<<it <<" ";
        }
        cout<<endl;
    }

    return 0;
}