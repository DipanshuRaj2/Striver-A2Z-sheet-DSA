#include <bits/stdc++.h>
using namespace std;
// int countTheSupriorELe(vector<int>&arr){
//     int n = arr.size();
//     int cnt = 0;
//     for(int i = 0; i<n; i++){
//         int ele = arr[i];
//         for(int j = i+1; j<n; j++){
//             if(ele <= arr[j]){
//                 ele = -1;
//                 break;
//             }
//             else{
//                 continue;
//             }
//         }
//         if(ele != -1){
//             cnt++;
//         }
//     }
//     return cnt;
// }
//another approach

int countTheSupriorELe(vector<int>&arr){
    int n = arr.size();
    int mini = INT_MIN;
    int cnt = 0;
    for(int i = n-1; i >= 0; i--){
        if(arr[i] >= mini){
            cnt++;
            mini = arr[i];
        }
    }
    return cnt;
}
int main()
{
    vector<int>arr = {8, 10, 6, 2, 9, 7};
    cout<<countTheSupriorELe(arr);
    return 0;
}