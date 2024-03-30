#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>ans;
        for(int i = 0; i<m;i++){
            if (nums1[i] == 0) continue;
            ans.push_back(nums1[i]);
        }
        for(int i = 0; i<n; i++){
            if (nums2[i] == 0) continue;
            ans.push_back(nums2[i]);
        }
        sort(ans.begin(), ans.end());
        nums1 = ans;
    }
};
int main()
{
    Solution sol;
    vector<int>nums1={1,2,3,0,0,0};
    int m = 3;
    vector<int>nums2 = {2,5,6};
    int n = 3;
    sol.merge(nums1, m, nums2, n);
    for(auto ele : nums1){
        cout<<ele<<" ";
    }
   return 0;
}