#include <bits/stdc++.h>
using namespace std;
void findSubset(int i, vector<int> &Earr, vector<int> &nums, vector<vector<int>> &ans, map<vector<int>,int>&mp, int n)
{
    if (i >= n)
    {
        mp[Earr]++;
        if(mp[Earr] == 1){
            ans.push_back(Earr);
        }
        return;
    }
    findSubset(i + 1, Earr, nums, ans, mp, n);
    Earr.push_back(nums[i]);
    findSubset(i + 1, Earr, nums, ans, mp, n);
    Earr.pop_back();
}
vector<vector<int>> subsetsWithDup(vector<int> &nums)
{
    map<vector<int>, int> mp;
    vector<int> EArr;
    vector<vector<int>> ans;
    findSubset(0, EArr, nums, ans, mp, nums.size());
    return ans;
}
int main()
{
    vector<vector<int>>ans;
    vector<int>arr = {1, 2, 2};
    ans = subsetsWithDup(arr);
    cout<<"{";
    for(int i = 0; i<ans.size(); i++){
        cout<<"{";
        for(int j = 0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<",";
        }
        cout<<"}";
    }
    cout<<"}";
    return 0;
}