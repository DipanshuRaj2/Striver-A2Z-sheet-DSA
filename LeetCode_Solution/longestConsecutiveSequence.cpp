// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
//     public:
//      int longestConsecutive(vector<int>& nums) {
//         if(nums.empty()){
//             return 0;
//         }
        
//         int count = 1;
//         int maxi = 1;
//         sort(nums.begin(), nums.end());
//         for(int i = 0; i<nums.size()-1; i++){

//             if(nums[i]==nums[i+1]-1){
//                 count++;
//                 maxi = max(count, maxi);
//             }
 
//             else if(nums[i] != nums[i+1]){
//                 count = 1;
//             }
//         }
//         return maxi;
//      }
// };
// int main()
// {
//     Solution sol;
//     vector<int>nums = {100,4,200,1,3,2};
//     cout<<sol.longestConsecutive(nums);
//    return 0;
// }

