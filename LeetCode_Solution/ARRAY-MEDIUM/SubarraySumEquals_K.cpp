/*
Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.

A subarray is a contiguous non-empty sequence of elements within an array.

 

Example 1:

Input: nums = [1,1,1], k = 2
Output: 2
Example 2:

Input: nums = [1,2,3], k = 3
Output: 2
*/
// #include<bits/stdc++.h>
// using namespace std;
// class Solution{
//     public:
//         int subarraySum(vector<int>& nums, int k){
//            int count = 0;
//            for(int i = 0; i<nums.size(); i++){
//             int sum = 0;
//             for(int j = i; j<nums.size(); j++){
//                 sum += nums[j];
//                 if(sum==k){
//                     count++;
//                 }
//             }
//            }
//             return count;
//         }
// };
// int main()
// {
//     Solution sol;
//     vector<int>a = {3,4,7,2,-3,1,4,2};
//     int k = 7;
//     cout<<sol.subarraySum(a ,k);
//    return 0;
// }

#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    int subarraySum(vector<int> &nums, int k){
        int n = nums.size();
        int sum = 0;
        int count = 0;
        unordered_map<int, int>prefixSum;
        for(int i = 0; i<n; i++){
            sum += nums[i];
            if(sum == k){
                count++;
            }

            if(prefixSum.find(sum - k) != prefixSum.end()){
                count += prefixSum[sum - k];
            }
            prefixSum[sum]++;
        }
        return count;
    }
};
int main()
{
    Solution sol;
    vector<int>nums = {1,2,3,-3,1,1,1,4,2,-3};
    int k = 3;
    cout<<sol.subarraySum(nums, k);
   return 0;
}