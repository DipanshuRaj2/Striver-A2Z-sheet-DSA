// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
// public:
//     vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//         unordered_set<int>st1;
//         unordered_set<int>st2;

//         for(auto ele : nums1){
//             st1.insert(ele);
//         }
//         for(auto ele: nums2){
//             st2.insert(ele);
//         }
//         vector<int>ans;
//         int i = 0; 
//         int j = 0; 
//         int n = st1.size(); int m = st2.size();
//         while(i < n && j < m){
//             if(st1[i] == st2[j]){
//                 ans.push_back(st1[i]);
//                 i++;
//                 j++;
//             }
//             else if(st1[i] < st2[j]){
//                 i++;
//             }
//             else if(st1[i] > st2[j]){
//                 j++;
//             }
//         }
//         return ans;
//     }
// };
// int main()
// {
//     Solution sol;
//     vector<int> nums1 = {2,2};
//     vector<int> nums2 = {1,2,2,1};
//     vector<int>ans = sol.intersection(nums1 , nums2);

//     for(auto ele : ans){
//         cout << ele;
//     }

//    return 0;
// }

#include<bits/stdc++.h>
using namespace std;
void checkRandi(vector<int>&nums1){
    unordered_set<int>st;
    // vector<int>ans;
    for(auto ele: nums1){
        st.insert(ele);
    }
    for (int i = 0; i < st.size(); i++)
    {
        cout<<st[i] <<" "
    }
    
    
}
int main()
{
    vector<int>nums = {1,2,2,1};
    checkRandi(nums);
   return 0;
}