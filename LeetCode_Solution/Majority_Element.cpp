/*
169. Majority Element
Solved
Easy
Topics
Companies
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

Example 1:

Input: nums = [3,2,3]
Output: 3
Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2
 

Constraints:

n == nums.length
1 <= n <= 5 * 104
-109 <= nums[i] <= 109
 

Follow-up: Could you solve the problem in linear time and in O(1) space?
*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int majorityElement(vector<int>& nums){
        int n = nums.size();
        for(int i = 0; i<n; i++){
            int count = 0;
            int ele = nums[i];
            for(int j = 0; j<n; j++){
                if(nums[j]==ele){
                    count++;
                }
            }
            if(count > (n/2)){
                return ele;
            }
        }
        return -1;
    }
};
int main()
{
    Solution sol;
    vector<int>nums={8,8,7,7,7};
    cout<<sol.majorityElement(nums);
   return 0;
}