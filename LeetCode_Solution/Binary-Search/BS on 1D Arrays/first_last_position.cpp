// using upper bound and lower bound concept
// #include<bits/stdc++.h>
// using namespace std;
// int lowerBound(vector<int>&nums, int k){
//         int n = nums.size();
//         int start = 0;
//         int end = n-1;
//         int ans = n;
//         while(start<= end){
//             int mid = (start+end)/2;
//             if(nums[mid] >= k){
//                 ans = mid;
//                 end = mid - 1;
//             }
//             else{
//                 start = mid+1;
//             }
//         }
//         return ans;
// }
// int upperBound(vector<int>&nums, int k){
//         int n = nums.size();
//         int start = 0;
//         int end = n-1;
//         int ans = n;
//         while(start<= end){
//             int mid = (start+end)/2;
//             if(nums[mid] > k){
//                 ans = mid;
//                 end = mid - 1;
//             }
//             else{
//                 start = mid+1;
//             }
//         }
//         return ans;
// }
// class Solution{
//     public:
//     vector<int> searchRange(vector<int>&nums, int k){
//         int lb = lowerBound(nums, k);
//         int ub = upperBound(nums, k);
//         int n = nums.size();
//         if(lb == n || nums[lb] != k){
//             return {-1, -1};
//         }
//         return {lb, ub-1};
//     }
// };
// int main()
// {
//     Solution sol;
//     vector<int>nums ={0 ,0 ,1 ,1 ,2 ,2 ,2 ,2};
//     int k = 2;
//     vector<int>ans = sol.searchRange(nums, k);
//     for(int i = 0; i<ans.size(); i++){
//         cout<<ans[i]<<" ";
//     }
//    return 0;
// }



// using proper binary search 
#include <bits/stdc++.h> 
using namespace std;
int firstOccurence(vector<int>&nums, int n, int k){

    int low = 0;
    int high = n-1;
    int first = -1;
    while(low <= high){
        int mid = (low+high)/2;
        if(nums[mid] == k){
            first = mid;
            high = mid -1;
        }
        else if(nums[mid] < k){
            low = mid +1;
        } else {
            high = mid - 1;
        }
    }
    return first;
}
int lastOccurence(vector<int>&nums, int n , int k){
    int low = 0; 
    int high = n-1;
    int last = -1;
    while(low <= high){
        int mid = (low+high)/2;
        if(nums[mid] == k){
            last = mid;
            low = mid+1; 
        }
        else if(nums[mid] < k){
            low = mid + 1;
        }
        else{
            high = mid -1;
        }
    }
    return last;
}
pair<int, int> firstAndLastPosition(vector<int>& nums, int n, int k)
{
    int first = firstOccurence(nums, n, k);
    int last = lastOccurence(nums, n, k);
    if(first == -1){
        return{-1, -1};
    }
    return {first, last};
}
int main()
{
    vector<int>nums ={0 ,0 ,1 ,1 ,2 ,2 ,2 ,2};
    int k = 2;
    int n = nums.size();
    pair<int, int>ans = firstAndLastPosition(nums, n, k);
        cout<<ans.first<<" "<<ans.second;

   return 0;
}