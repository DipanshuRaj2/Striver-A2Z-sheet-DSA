/*136. Single Number
Solved
Easy
Topics
Companies
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.

 

Example 1:

Input: nums = [2,2,1]
Output: 1
Example 2:

Input: nums = [4,1,2,1,2]
Output: 4
Example 3:

Input: nums = [1]
Output: 1
 

Constraints:

1 <= nums.length <= 3 * 104
-3 * 104 <= nums[i] <= 3 * 104
Each element in the array appears twice except for one element which appears only once.
*/

// brute force  O(n*n)
// #include<bits/stdc++.h>
// using namespace std;
// class Solution{
//     public:
//     int count = 0;
//     int singleNumber(vector<int>nums){
//         for(int i = 0; i<nums.size(); i++){
//             int ele = nums[i];
//             for(int j = 0; j<nums.size(); j++){
//                 if(nums[j]==ele){
//                     count++;
//                 }
//             }
//             if(count == 1){
//                 return ele;
//             }
//         }
//         return -1;
//     }
// };
// int main()
// {
//     Solution sol;
//     vector<int>nums = {4,1,2,1,2};
//     cout<<(sol.singleNumber(nums));

//    return 0;
// }

// using ordered function

// #include<bits/stdc++.h>
// using namespace std;
// class Solution{
//     public:
//     int missingNumber(vector<int>nums){
//         unordered_map<int, int>mpp;
//         for(int i = 0; i<nums.size(); i++){
//             mpp[nums[i]]++;
//         }
//         for(auto ele : mpp){
//             if(ele.second == 1){
//                 return ele.first;
//             }
//         }
//         return -1;
//     }
// };
// int main()
// {
//     Solution sol;
//     vector<int> nums={4,1,2,1,2};
//     cout<<sol.missingNumber(nums);
//    return 0;
// }

//using XOR function
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int missingNumber(vector<int>nums){
        int xoor = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            xoor = nums[i]^xoor;
        }
        return xoor;
        
    }
};
int main()
{
    Solution sol;
    vector<int> nums={4,1,2,1,2};
    cout<<sol.missingNumber(nums);
   return 0;
}
