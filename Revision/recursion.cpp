#include <bits/stdc++.h>
using namespace std;
void print(int i, vector<int>&arr, int n){
    if(i == n){
        return;
    }
    cout<<arr[i]<<" ";
    print(i+1, arr, n);
}
void reverse(int i, vector<int>&arr, int n){
    if(i >= n/2){
        return;
    }
    swap(arr[i], arr[n-i-1]);
    reverse(i+1, arr, n);
}
int main()
{
    vector<int>arr = {1,2,4,5};
    reverse(0,arr, arr.size());
    print(0,arr, arr.size());
    return 0;
}