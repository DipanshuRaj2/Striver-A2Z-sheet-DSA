#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if(nums[0]== 1){
            return 0;
        }
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]!=nums[i+1]-1){
                return nums[i]+1;
            }
        }
        return nums.size();
    }
};
int main()
{
    Solution sol;
    // vector<int>nums = {9,6,4,2,3,5,7,0,1};
    vector<int>nums = {0,1};
    cout<<(sol.missingNumber(nums));
   return 0;
}