// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
//     public:
//         int reversePairs(vector<int>& nums){
//             int count = 0;
//             for(int i = 0; i<nums.size()-1; i++){
//                 for(int j = i+1; j<nums.size(); j++){
//                     if(nums[i] > 2*(long long)nums[j]){
//                         count++;
//                     }
//                 }
//             }
//             return count;
//         }
// };
// int main()
// {
//     Solution sol;
//     vector<int>nums = {5,3,2,1,4};

//     cout<<sol.reversePairs(nums);
//    return 0;
// }
// tle O(n^2);
//  this code give tle so we have to optimised the code near about O(n*logn);

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int count = 0;
    void merge(vector<int> &arr, int low, int mid, int high)
    {
        int left = low;
        int right = mid + 1;
        vector<int> temp;
        while (left <= mid && right <= high)
        {
            if (arr[left] <= arr[right])
            {
                temp.push_back(arr[left]);
                left++;
            }
            if (arr[left] >= arr[right])
            {
                temp.push_back(arr[right]);
                right++;
            }
        }
        while (left <= mid)
        {
            temp.push_back(arr[left]);
            left++;
        }
        while (right <= high)
        {
            temp.push_back(arr[right]);
            right++;
        }
        for (int i = low; i <= high; i++)
        {
            arr[i] = temp[i - low];
        }
    }
    void countPairs(vector<int> &arr, int low, int mid, int high)
    {
        int right = mid + 1;
        for (int i = low; i <= mid; i++)
        {
            while (right <= high && arr[i] > 2 * (long long)arr[right])
            {
                right++;
            }
            count += (right - (mid + 1));
        }
    }
    void mergeSort(vector<int> &arr, int low, int high)
    {
        if (low >= high)
            return;
        int mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        countPairs(arr, low, mid, high);
        merge(arr, low, mid, high);
    }
    int reversePairs(vector<int>&arr){
        int n = arr.size();
        mergeSort(arr, 0, n-1);
        return count;
    }
};
int main()
{
    Solution sol;
    vector<int> nums = {1,3,2,3,1};
    cout<<sol.reversePairs(nums);
   
    return 0;
}
