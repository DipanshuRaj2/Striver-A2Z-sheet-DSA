#include <bits/stdc++.h>
using namespace std;
int 2SubsetArrayDiff(vector<int>&arr, int n){
    unordered_map<int, int>ump;
    for(int i = 0; i<arr.size(); i++){
        ump.insert[arr[i]]++;
    }
    
}
int main()
{
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    int n = 2SubsetArrayDiff(arr, n);
    return 0;
}