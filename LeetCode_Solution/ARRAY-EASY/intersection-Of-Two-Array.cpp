// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
// public:
//     vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//         unordered_set<int>st1(nums1.begin() , nums1.end());
//         unordered_set<int>st2(nums2.begin(), nums2.end());

//         vector<int>ans;
//         for(auto ele : st1){
//             if(st2.find(ele) != st2.end()){
//                 ans.push_back(ele);
//             }
//         }
//         return ans;
//     }
// };
// int main()
// {
//     Solution sol;
//     vector<int> nums1 = {4,9,5};
//     vector<int> nums2 = {9,4,9,8,4};
//     vector<int>ans = sol.intersection(nums1 , nums2);

//     for(auto ele : ans){
//         cout << ele;
//     }

//    return 0;
// }

#include<bits/stdc++.h>
using namespace std;
vector<int>intersection(vector<int>&nums1 , vector<int>&nums2){
    unordered_map<int, int> mpp1;
    unordered_map<int, int> mpp2;

    vector<int>ans;
    for(int i = 0; i<nums1.size(); i++){
        mpp1[nums1[i]]++;
    }
    for(int i = 0; i<nums2.size(); i++){
        mpp2[nums2[i]]++;
    }
    for(auto it : mpp1){
        if(mpp2[it.first]){
            ans.push_back(it.first);
        }
    }
    return ans;
}
int main()
{
     vector<int> nums1 = {4,9,5};
    vector<int> nums2 = {9,4,9,8,4};
    vector<int>ans = intersection(nums1 , nums2);

    for(auto ele : ans){
        cout << ele;
    }
   return 0;
}
