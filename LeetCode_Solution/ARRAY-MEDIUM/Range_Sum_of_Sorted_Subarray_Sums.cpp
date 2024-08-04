#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int rangeSum(vector<int> &nums, int n, int left, int right)
    {
        vector<int> ans;
        int sum = 0;
        for (int i = 0; i < n ; i++)
        {
            sum = nums[i];
            ans.push_back(sum);
            for (int j = i + 1; j < n; j++)
            {
                sum = sum + nums[j];
                ans.push_back(sum);
            }
            sum = 0;
        }

        sort(ans.begin(), ans.end());
        for(int i = 0; i<ans.size(); i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        int res = 0;
        for (int i = left-1; i <right; i++)
        {
            res = res + ans[i];
        }
         res = res % 10^+7;
        return res;
    }
};
int main()
{
    Solution sol;
    vector<int>arr = {1,2,3,4};
    int n = arr.size();
    int left = 1, right = 5;
    cout<<"rangeSum: "<<sol.rangeSum(arr, n, left, right);
    return 0;
}