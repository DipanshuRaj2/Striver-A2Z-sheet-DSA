
// #include <bits/stdc++.h>
// using namespace std;
// int majorityEle(vector<int>&nums){
//     int n = nums.size();
//     int ele;
//     int cnt = 0;
//     for(int i = 0; i<n; i++){
//         if(cnt == 0){
//             cnt = 1;
//             ele = nums[i];
//         }
//         else if(ele == nums[i]){
//             cnt++;
//         }
//         else{
//             cnt--;
//         }
//     }
//     int cnt1 = 0;
//     for(int i = 0; i<n; i++){
//         if(nums[i] == ele) cnt1++;
//     }
//     if(cnt1 > n/2){
//         return  ele;
//     }
//     return -1;
// }
// int main()
// {
//    vector<int>arr ={2, 2, 1, 1, 1, 2, 2};
//     cout<<majorityEle(arr);

//     return 0;
// }

// recursion

// #include<iostream>
// using namespace std;
// int f1(int n){
//     if(n==0){
//         return 0;
//     }

//     return n + f1(n-1);
// }
// int main()
// {
//     cout<<f1(4);
//     return 0;
// }

// reverseArray
#include <bits/stdc++.h>
using namespace std;
void printArray(vector<int>arr,int i)
{
    if(i==arr.size())
    {
        // cout<<arr[i];
        return;
    }
    cout<<arr[i]<<" ";
    printArray(arr,i+1);
}

void reverseArray(vector<int>&arr, int i, int n){
    if(i >= n/2){
        return;
    }
    swap(arr[i], arr[n-i-1]);
    reverseArray(arr, i+1, n);
}
int main()
{
    vector<int>arr = {1,2,3,4,5};
    
    reverseArray(arr, 0, arr.size());
    // for(int i = 0; i<arr.size(); i++){
    //     cout<<arr[i]<<",";
    // }
    printArray(arr,0);
    return 0;
}