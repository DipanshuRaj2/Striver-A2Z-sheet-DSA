/*Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

 

Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
Example 2:

Input: nums = [0]
Output: [0]
 

Constraints:

1 <= nums.length <= 104
-231 <= nums[i] <= 231 - 1
 

Follow up: Could you minimize the total number of operations done?*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int count = 0;
        vector<int>ans;
        for(int i = 0;i<arr.size(); i++){
            if(arr[i] != 0){
                ans.push_back(arr[i]);
            }
        }
        for(int i = 0; i<arr.size(); i++){
            if(arr[i]== 0){
                ans.push_back(arr[i]);
            }
        }
        int j = 0;
        for(int i = 0; i<arr.size(); i++){
            arr[j] =ans[i];
            j++;
        }
        
    }
};
// int main()
// {
//     Solution sol;
//     vector<int>nums = {0,1,0,3,12};
//     sol.moveZeroes(nums);

//     for(int i = 0; i<nums.size(); i++){
//         cout<<nums[i]<<" ";
//     }
//    return 0;
// }
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int i = 0;
        int j = arr.size()-1;
        while(i<=j){
            if(arr[i])
        }
    }
};
int main()
{
    Solution sol;
    vector<int>nums = {0,1,0,3,12};
    sol.moveZeroes(nums);

    for(int i = 0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
   return 0;
}