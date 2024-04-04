#include<bits/stdc++.h>
using namespace std;
void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a, vector<long long> &b){
    int n = a.size();
    int m = b.size();

    int left = n-1;
    int right = 0;
    while(left >= 0 && right < m){
        if(a[left] > a[right]){
            swap(a[left], a[right]);
            left--; right++;
        }
        else{
            break;
        }
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
}
int main()
{
    vector<long long>nums1 = {0, 1, 3, 5, 6};
    vector<long long>nums2 = {3 ,4 ,4 ,7 ,8 ,8 ,9 ,9};
    mergeTwoSortedArraysWithoutExtraSpace(nums1, nums2);
    for(int i = 0; i<nums1.size(); i++){
        cout<<nums1[i]<<" ";
    }
    for(int i = 0; i<nums2.size(); i++){
        cout<<nums2[i]<<" ";
    }
    
   return 0;
}