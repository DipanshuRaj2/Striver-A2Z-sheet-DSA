#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>st1(nums1.begin() , nums1.end());
        unordered_set<int>st2(nums2.begin(), nums2.end());

        vector<int>ans;
        for(auto ele : st1){
            if(st2.find(ele) != st2.end()){
                ans.push_back(ele);
            }
        }
        return ans;
    }
};
int main()
{
    Solution sol;
    vector<int> nums1 = {4,9,5};
    vector<int> nums2 = {9,4,9,8,4};
    vector<int>ans = sol.intersection(nums1 , nums2);

    for(auto ele : ans){
        cout << ele;
    }

   return 0;
}

