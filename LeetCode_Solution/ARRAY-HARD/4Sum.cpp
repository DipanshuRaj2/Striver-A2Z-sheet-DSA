/*Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:

0 <= a, b, c, d < n
a, b, c, and d are distinct.
nums[a] + nums[b] + nums[c] + nums[d] == target
You may return the answer in any order.



Example 1:

Input: nums = [1,0,-1,0,-2,2], target = 0
Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]
Example 2:

Input: nums = [2,2,2,2,2], target = 8
Output: [[2,2,2,2]]*/

// bruteforce approach
//  #include<bits/stdc++.h>
//  using namespace std;
//  class Solution{
//      public:
//      vector<vector<int>>fourSum(vector<int>&nums, int target){
//          set<vector<int>>st;
//          int n = nums.size();
//          for(int i = 0; i<n; i++){
//              for(int j = i+1; j<n; j++){
//                  for(int k = j+1; k<n; k++){
//                      for(int l = k+1;l<n; l++){
//                          long long sum = nums[i]+nums[j]+nums[k]+nums[l];
//                          if(sum == target){
//                              vector<int>temp = {nums[i], nums[j], nums[k],nums[l]};
//                              sort(temp.begin(), temp.end());
//                              st.insert(temp);
//                          }
//                      }
//                  }
//              }
//          }
//          vector<vector<int>>ans(st.begin(), st.end());
//          return ans;
//      }
//  };
//  int main()
//  {
//      Solution sol;
//      vector<int>nums = {1,0,-1,0,-2,2};
//      int target = 0;
//      vector<vector<int>>ans = sol.fourSum(nums, target);

//     for(auto ele:ans){
//         cout<<"[";
//         for(auto it: ele){
//             cout<<it<<", ";
//         }
//         cout<<"]";
//     }
//    return 0;
// }

// optimal approach
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> nums, int target)
    {
        set<vector<int>> st;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                set<long long> hashset;
                for (int k = j + 1; k < n; k++)
                {
                    long long sum = nums[i] + nums[j] + nums[k];
                    long long fourth = target - sum;
                    if (hashset.find(fourth) != hashset.end())
                    {
                        vector<int> temp = {nums[i], nums[j], nums[k], (int)(fourth)};
                        sort(temp.begin(), temp.end());
                        st.insert(temp);
                    }
                    hashset.insert(nums[k]);
                }
            }
        }
        vector<vector<int>>ans(st.begin(), st.end());
        return ans;
    }
};
int main()
{
    Solution sol;
    vector<int>nums={1,0,-1,0,-2,2};
    int target = 0;
    vector<vector<int>>ans = sol.fourSum(nums, target);

    for(auto ele: ans){
        cout<<"[";
        for(auto it : ele){
            cout<<it<<", ";
        }
        cout<<"]";
    }
    return 0;
}