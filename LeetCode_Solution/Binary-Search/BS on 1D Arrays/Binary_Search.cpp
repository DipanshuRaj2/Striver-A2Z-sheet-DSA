// #include<bits/stdc++.h>
// using namespace std;
// class Solution{
//     public:
//     int BinarySearch(vector<int>nums, int target){
//         int low = 0;
//         int high = nums.size()-1;
//         while(low <= high){

//             int mid = (low+high)/2;

//             if(nums[mid] == target){
//                 return mid;
//             }
//             else if(nums[mid] <= target){
//                 low = mid+1;
//             }
//             else if(nums[mid] >=  target){
//                 high = mid -1;
//             }
//         }
//         return -1;
//     }
// };
// int main()
// {
//     Solution sol;
//     vector<int>nums = {-1,0,3,5,9,12};
//     int target = 9;
//     cout<<sol.BinarySearch(nums , target);
//    return 0;
// }
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int bs(vector<int>&nums, int low, int high, int target){
        if(low > high){
            return -1;
        }
        int mid = (low+high)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid] < target){
            return bs(nums, mid+1, high, target);
        }
        return bs(nums, low, mid-1, target);
    }


    int BinarySearch(vector<int>&nums, int target){
        return bs(nums, 0, nums.size()-1, target);
    }
};
int main()
{
    Solution sol;
    vector<int>nums = {-1,0,3,5,9,12};
    int target = 9;
    cout<<sol.BinarySearch(nums , target);
   return 0;
}