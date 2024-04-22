#include<bits/stdc++.h>
using namespace std;
int search(vector<int>&arr , int n , int k){
    int low = 0; 
    int high = n-1;

    while(low <= high){
        int mid = (low+high)/2;
        if(arr[mid] == k){
            return mid;
        }

        if(arr[low] <= arr[mid]){
            if(arr[low] <= k && k <= arr[mid]){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        else{//arr[low] >= arr[mid]
            if(arr[mid] <= k && k <= arr[high]) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
    }
    return -1;
}
int main()
{
    vector<int>nums ={4,5,6,7,0,1,2};
    int k = 0;
    int n = nums.size();
    cout<< search(nums, n, k);
   return 0;
}