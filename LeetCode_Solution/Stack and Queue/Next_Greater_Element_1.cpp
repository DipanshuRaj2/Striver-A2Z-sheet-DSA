/*The next greater element of some element x in an array is the first greater element that is to the right of x in the same array.

You are given two distinct 0-indexed integer arrays nums1 and nums2, where nums1 is a subset of nums2.

For each 0 <= i < nums1.length, find the index j such that nums1[i] == nums2[j] and determine the next greater element of nums2[j] in nums2. If there is no next greater element, then the answer for this query is -1.

Return an array ans of length nums1.length such that ans[i] is the next greater element as described above.

 

Example 1:

Input: nums1 = [4,1,2], nums2 = [1,3,4,2]
Output: [-1,3,-1]
Explanation: The next greater element for each value of nums1 is as follows:
- 4 is underlined in nums2 = [1,3,4,2]. There is no next greater element, so the answer is -1.
- 1 is underlined in nums2 = [1,3,4,2]. The next greater element is 3.
- 2 is underlined in nums2 = [1,3,4,2]. There is no next greater element, so the answer is -1.
Example 2:

Input: nums1 = [2,4], nums2 = [1,2,3,4]
Output: [3,-1]
Explanation: The next greater element for each value of nums1 is as follows:
- 2 is underlined in nums2 = [1,2,3,4]. The next greater element is 3.
- 4 is underlined in nums2 = [1,2,3,4]. There is no next greater element, so the answer is -1.
 */
//              brute force approach
// #include<bits/stdc++.h>
// using namespace std;
// class Solution{
//     public:
//     vector<int>nextGreaterElement(vector<int>&nums1, vector<int>&nums2){
//         vector<int>ans;
//         for(int i = 0; i<nums1.size(); i++){
//             int temp = -1;
//             for(int j = 0; j<nums2.size(); j++){
//                 if(nums1[i]==nums2[j]){
//                     for(int k = j+1; k<nums2.size(); k++){
//                         if(nums2[k] > nums1[i]){
//                             temp = nums2[k];
//                             break;
//                         }
//                     }
//                     ans.push_back(temp);
//                     break;
//                 }
//             }
//         }
//         return ans;
//     }
// };
// int main()
// {
//     Solution sol;
    
//     vector<int>nums1 = {4,1,2};
//     vector<int>nums2 = {1,3,4,2};
//     vector<int>ans;
//     ans = sol.nextGreaterElement(nums1, nums2);
//     for(int i = 0; i<ans.size(); i++){
//         cout<<ans[i] <<" ";
//     }
//    return 0;
// }



// optimal approach using stack

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>st;
        unordered_map<int, int>ump;
        int n = nums2.size();
        for(int i = n-1; i>=0; i--){
            int ele = nums2[i];
            while(!st.empty() && st.top()<=ele){
                st.pop();
            }
            int res;
            if(st.empty()) {
                res = -1;
            } else {
                res = st.top();
            }
            ump.insert({ele, res});
            st.push(ele);               
        }
        vector<int> ans;
        for(auto ele : nums1){
            ans.push_back(ump[ele]);
        }
        return ans;
    }
};
int main()
{
    Solution sol;
    
    vector<int>nums1 = {4,1,2};
    vector<int>nums2 = {1,3,4,2};
    vector<int>ans;
    ans = sol.nextGreaterElement(nums1, nums2);
    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i] <<" ";
    }
   return 0;
}