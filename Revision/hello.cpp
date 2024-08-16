// #include <bits/stdc++.h>
// using namespace std;
// int maximumSubArray(vector<int>&arr, int k)
// {
//     int len = 0;
//     int maxi = 0;
//     for(int i = 0; i<arr.size(); i++){
//         for(int j = i+1; j<arr.size(); j++){
//             if(arr[i] + arr[j] == k){
//                 maxi = max(maxi, j-i+1);
//             }
//         }
//     }
//     return maxi;
// }
// int main()
// {   
//     vector<int>arr = {1 ,4 ,3 ,3 ,5 ,5};
//     int k = 16;
//     cout<<maximumSubArray(arr, k);

//     return 0;
// }