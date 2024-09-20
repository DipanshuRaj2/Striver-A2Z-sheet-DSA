#include<bits/stdc++.h>
using namespace std;
vector<int>mergeTwoArray(vector<int>&arr1, vector<int>&arr2){
    int j = 0; 
   
    int n = arr1.size();
    int m = arr2.size();
    int i = 0;
    vector<int>ans;
    while(i < n && j < m){
        if(arr1[i] < arr2[j]){
            ans.push_back(arr1[i++]);
        }
        else{
            ans.push_back(arr2[j++]);
        }
    }
    while(i < n){
       ans.push_back(arr1[i++]);
    }
    while(j < m){
        ans.push_back(arr2[j++]);
    }
    return ans;
}
int main()
{
    vector<int>arr1 = {1, 3, 4, 5};
    vector<int>arr2 = {2, 4, 6, 8};
    vector<int>ans = mergeTwoArray(arr1, arr2);
    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}