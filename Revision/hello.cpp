#include <bits/stdc++.h>
using namespace std;
// int removeDuplicates(vector<int>&arr, int n){
//     set<int>st;
//     for(int i = 0; i<n; i++){
//         st.insert(arr[i]);
//     }
//     int k = st.size();
//     int j = 0;
//     for(int ele : st){
//         arr[j++] = ele;
//     }
//     return k;
// }
int removeDuplicates(vector<int>&arr, int n){
    int i = 0;
    for(int j = 1;j<n; j++){
        if(arr[i] != arr[j]){
            i++;
            arr[i] = arr[j];
        }
    }
    return i+1;
}
int main()
{
    vector<int>arr = {1,1,2,2,2,3,3};
    int k = removeDuplicates(arr, arr.size());
    for(int i = 0; i<k; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}