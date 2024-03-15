/*Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.

 

Example 1:

Input: nums = [1,2,3,4]
Output: [24,12,8,6]
Example 2:

Input: nums = [-1,1,0,-3,3]
Output: [0,0,9,0,0]
*/
// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//         vector<int>ans;
//         for(int i = 0;i<nums.size(); i++){
//             int result = 1;
//             for(int j = 0; j<nums.size();j++){
//                 if(i == j)
//                     continue;
//                 result = result*nums[j];
//             }
//             ans.push_back(result);
//         }
//         return ans;
//     }
// };
// int main()
// {
//     Solution sol;
//     vector<int>nums = {-1,1,0,-3,3};
    
//     vector<int>ans = sol.productExceptSelf(nums);
//     for(int i = 0; i<nums.size(); i++){
//         cout<<ans[i]<<" ";
//     }
//    return 0;
// }
// this code give me TLE






// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {

//         int n = nums.size();
//         int count_zero = 0;
//         int product = 1;

//         for(auto num: nums){
//             if(num == 0)
//                 count_zero++;
            
//             else
//                 product *= num;
//         }
//         vector<int>result(n);

//         for(int i = 0; i<nums.size(); i++){
//             int num = nums[i];
//             if(num != 0){
//                 if(count_zero > 0){
//                     result[i] = 0;
//                 }
//                 else if(count_zero == 0){ 
//                     result[i] = product /nums[i];
//                 }
//             }
//             else if(num == 0){
//                 if(count_zero > 1){
//                     result[i] = 0;
//                 }
//                 else if(count_zero == 1){
//                     result[i] = product;
//                 }
//             }
            
//         }
//         return result;
//     }
// };
// int main()
// {
//     Solution sol;
//     vector<int>nums = {-1,1,0,-3,3};
    
//     vector<int>ans = sol.productExceptSelf(nums);
//     for(int i = 0; i<nums.size(); i++){
//         cout<<ans[i]<<" ";
//     }
//    return 0;
// }
// this code run complete but it not satisfied the condition that not any divsion property uses






// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//         int n = nums.size();

//         vector<int>leftnum(n);
//         vector<int>rightnum(n);

//         leftnum[0] = 1;
//         rightnum[n-1] = 1;

//         for(int i = 1; i<n; i++){
//             leftnum[i] = leftnum[i-1]*nums[i-1];
//         }
//         for(int i = n-2; i>=0; i--){
//             rightnum[i] = rightnum[i+1]*nums[i+1];
//         }
//         vector<int>result(n);
//         for(int i = 0; i<n; i++){
//             result[i] = leftnum[i]*rightnum[i];
//         }
//         return result;
//     }
// };
// int main()
// {
//     Solution sol;
//     vector<int>nums = {-1,1,0,-3,3};
    
//     vector<int>ans = sol.productExceptSelf(nums);
//     for(int i = 0; i<nums.size(); i++){
//         cout<<ans[i]<<" ";
//     }
//    return 0;
// }
//it take extra space so its not satisfy the condition




//actual solution  // o(1) space o(n) time complexity
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>result(n);
        result[0] = 1;
        for(int i = 1; i<nums.size();i++){
            result[i] = result[i-1] * nums[i-1];
        }
        int right_product = 1;
        for(int i = n-1; i>=0; i--){
            result[i] = result[i]*right_product;
            right_product *= nums[i];
        }
        return result;
    }
};
int main()
{
    Solution sol;
    vector<int>nums = {-1,1,0,-3,3};
    
    vector<int>ans = sol.productExceptSelf(nums);
    for(int i = 0; i<nums.size(); i++){
        cout<<ans[i]<<" ";
    }
   return 0;
}