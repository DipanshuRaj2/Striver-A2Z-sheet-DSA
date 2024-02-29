/*268. Missing Number
Solved
Easy
Topics
Companies
Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

 

Example 1:

Input: nums = [3,0,1]
Output: 2
Explanation: n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.
Example 2:

Input: nums = [0,1]
Output: 2
Explanation: n = 2 since there are 2 numbers, so all numbers are in the range [0,2]. 2 is the missing number in the range since it does not appear in nums.
Example 3:

Input: nums = [9,6,4,2,3,5,7,0,1]
Output: 8
Explanation: n = 9 since there are 9 numbers, so all numbers are in the range [0,9]. 8 is the missing number in the range since it does not appear in nums.
 

Constraints:

n == nums.length
1 <= n <= 104
0 <= nums[i] <= n
*/
// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         sort(nums.begin(), nums.end());
//         if(nums[0]== 1){
//             return 0;
//         }
//         for(int i = 0; i<nums.size(); i++){
//             if(nums[i]!=nums[i+1]-1){
//                 return nums[i]+1;
//             }
//         }
//         return nums.size();
//     }
// };
// int main()
// {
//     Solution sol;
//     // vector<int>nums = {9,6,4,2,3,5,7,0,1};
//     vector<int>nums = {0,1};
//     cout<<(sol.missingNumber(nums));
//    return 0;
// }

//brute force approach
// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
// public:
// int missingNumber(vector<int>&a) {
//     int N = a.size()+1;
//     // Outer loop that runs from 1 to N:
//     for (int i = 0; i <= N; i++) {

//         // flag variable to check
//         //if an element exists
//         int flag = 0;

//         //Search the element using linear search:
//         for (int j = 0; j <a.size(); j++) {
//             if (a[j] == i) {

//                 // i is present in the array:
//                 flag = 1;
//                 break;
//             }
//         }

//         // check if the element is missing
//         //i.e flag == 0:

//         if (flag == 0) return i;
//     }
   

//     // The following line will never execute.
//     // It is just to avoid warnings.
//     return -1;
//  }
// };
// int main()
// {
//     Solution sol;
//     // vector<int>nums = {9,6,4,2,3,5,7,0,1};
//     vector<int>nums = {0,1};
//     cout<<(sol.missingNumber(nums));
//    return 0;
// }


