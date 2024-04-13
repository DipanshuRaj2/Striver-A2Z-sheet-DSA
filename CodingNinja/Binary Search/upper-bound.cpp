// #include<bits/stdc++.h>
// using namespace std;
// int upperBound(vector<int>&arr, int x, int n){
//     int ans = 0;
//     for(int i = 0; i<n; i++){
//         if(arr[i] <= x){ 
//             ans = i+1;
//         }
//     }
//     return ans;
// }
// int main()
// {
//     vector<int>arr ={1,4,7,8,10};
//     int n = arr.size();
//     int x = 7;
//     cout<< upperBound(arr, x, n);
//    return 0;
// }

// above code take o(n)time complexity

//but we have do in the o(logn)

#include<bits/stdc++.h>
using namespace std;
int upperBound(vector<int>&arr, int x, int n){
    int low = 0; 
    int high = n-1;
    int ans = n;
    while(low <= high){
        int mid = (low+high)/2;
        if(arr[mid] > x){
            ans = mid;
            high = mid - 1;
        }
        else if(arr[mid] <= x){
            low = mid + 1;
        }
    }
    return ans;
}
int main()
{
    vector<int>arr ={1,4,7,8,10};
    int n = arr.size();
    int x = 7;
    cout<< upperBound(arr, x, n);
   return 0;
}