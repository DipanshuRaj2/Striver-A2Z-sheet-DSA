#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int subarraySum(vector<int>& nums, int k){
           int count = 0;
           for(int i = 0; i<nums.size(); i++){
            int sum = 0;
            for(int j = i; j<nums.size(); j++){
                sum += nums[j];
                if(sum==k){
                    count++;
                }
            }
           }
            return count;
        }
};
int main()
{
    Solution sol;
    vector<int>a = {3,4,7,2,-3,1,4,2};
    int k = 7;
    cout<<sol.subarraySum(a ,k);
   return 0;
}