// #include<bits/stdc++.h>
// using namespace std;
// int lowerBound(vector<int>arr, int n, int x){
//     for(int i = 0; i<n; i++){
//         if(arr[i] >= x){
//             return i;
//         }
//     }
// }
// int main()
// {
//     vector<int>arr={1,2,2,3,3,5};
//     int x = 7;
//     int n = arr.size();
//     cout<<lowerBound(arr, x, n);
//     return 0;
// }


//time complexity is O(n);

// #include<bits/stdc++.h>
// using namespace std;
// int lowerBound(vector<int>arr, int n, int x){
//     int low = 0;
//     int high = n-1;
//     int ans = n;
//     while(low <=high){
//         int mid = (low+high)/2;
//         if(arr[mid]>= x){
//             ans = mid;
//             high = mid - 1;
//         }
//         else if(arr[mid] <= x){
//             low = mid+1;
//         }
//     }
//     return ans;
// }
// int main()
// {
//     vector<int>arr= {1,2,2,3,3,5};
//     int x = 7;
//     int n = arr.size();
    
//     cout<<lowerBound(arr, x, n);
//     return 0;
// }



//by using c++ stl
#include<bits/stdc++.h>
using namespace std;
int lowerBound(vector<int>&arr, int x, int n){
   int lb = lower_bound(arr.begin(), arr.end(), x) - arr.begin();
   return lb;
}
int main()
{
    vector<int>arr= {1,2,2,3,3,5};
    int x = 7;
    int n = arr.size();
    
    cout<<lowerBound(arr, x, n);
   return 0;
}