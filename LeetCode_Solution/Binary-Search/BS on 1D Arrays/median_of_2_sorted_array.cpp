/*Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).

 

Example 1:

Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.
Example 2:

Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        for(int i = 0; i<nums1.size(); i++){
            ans.push_back(nums1[i]);
        }
        for(int j = 0; j<nums2.size(); j++){
            ans.push_back(nums2[j]);
        }
        sort(ans.begin(), ans.end());
        int n = ans.size();
        double ansd;
        
        if(n%2 == 0){
            int ele = ans[n/2];
            int ele1 = ans[(n-1)/2];
            int sum = ele + ele1;
            ansd = (double)sum/2;
        }
        else{
            int ele = ans[n/2];
            ansd = (double)ele;
        }
        
        return ansd;
    }
};
int main()
{
    Solution sol;
    vector<int>nums1 = {1,2};
    vector<int>nums2 = {3,4};
    cout<<sol.findMedianSortedArrays(nums1, nums2);
   return 0;
}