#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int upperBound(vector<int>nums, int k){
        int n = nums.size();
        int start = 0;
        int end = n-1;
        int ans = n;
        while(start<= end){
            int mid = (start+end)/2;
            if(nums[mid] >= k){
                ans = mid;
                end = mid - 1;
            }
            else{
                start = mid+1;
            }
        }
        return ans;
    }
};
int main()
{
    Solution sol;
    vector<int>nums = {5,7,7,8,8,10};
    int k = 8;
    cout<<sol.upperBound(nums, k);
   return 0;
}