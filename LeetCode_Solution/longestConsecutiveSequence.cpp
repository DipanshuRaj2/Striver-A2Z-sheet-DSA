/*Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

You must write an algorithm that runs in O(n) time.

 

Example 1:

Input: nums = [100,4,200,1,3,2]
Output: 4
Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.
Example 2:

Input: nums = [0,3,7,2,5,8,4,6,0,1]
Output: 9*/
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

// optimal approach
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int longestConsecutive(vector<int>&nums){
        set<int>s;
        for(int x: nums){
            s.insert(x);
        }
        int ans = 0;
        for(int i = 0; i<s.size(); i++){
            int current_ele = nums[i];

            int previous_ele = current_ele - 1;

            int count = 0;

            if(s.find(previous_ele)==s.end()){ //kuch nhi mila if condition ke andar ghusse

                while(s.find(current_ele) != s.end()){
                    current_ele++;
                    count++;
                }
            }
            ans = max(count, ans);
        }
        return ans;
    }

};
int main()
{
    Solution sol;
    vector<int>nums = {9,1,4,7,3,-1,0,5,8,-1,6};
    cout<<sol.longestConsecutive(nums);
   return 0;
}