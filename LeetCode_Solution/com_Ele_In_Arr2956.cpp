#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class solution {
    public:
        vector<int> findIntersectionValues(vector<int>&nums1 , vector<int>&nums2){
            vector<int>ans(2);
            for(int i = 0; i<nums1.size(); i++){
                for(int j = 0; j<nums2.size(); j++){

                    if(nums1[i] == nums2[j]){
                        ans[0]++;
                        break;
                    }
                }
            }

            for(int i = 0; i<nums2.size(); i++){
                for(int j = 0; j<nums1.size();j++){
                    if(nums2[i] == nums1[j]){
                        ans[1]++;
                        break;
                    }
                }
            }
            return ans;
        }
};
int main()
{
    solution s;
    vector<int>nums1 = {4,3,2,3,1};
    vector<int>nums2 ={2,2,5,2,3,6};
    vector<int>ans;
    ans= s.findIntersectionValues(nums1,nums2);
    for(auto ele : ans){
        cout<<ele<<" ";
    }
   return 0;
}