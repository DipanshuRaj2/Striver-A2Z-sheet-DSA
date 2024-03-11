#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<int> twoSum(vector<int>&nums, int target) {
        unordered_map<int, int>mpp;
        for(int i = 0; i<nums.size(); i++){
            int num = nums[i];
            int moreNeeded = target - num;

            if(mpp.find(moreNeeded) != mpp.end()) {
                return {mpp[moreNeeded], i};
            }
            mpp[num] = i;
        }
        return {-1, -1};
    }
};
int main()
{
    Solution sol;
    vector<int> nums = {2,6,5,8,11};
    int target = 14;
    vector<int>ans = (sol.twoSum(nums, target));
    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
   return 0;
}