#include <bits/stdc++.h>
using namespace std;
int f1(vector<int>&arr, int i, int n){
    if(i == n){
        return arr[i];
    }
    return arr[i] + f1(arr, i+1, n);
}
int main()
{
    vector<int>arr = {1,2,3,4,5};
    int res = f1(arr, 0, arr.size()-1);
    cout<<res;
    return 0;
}