#include <bits/stdc++.h>
using namespace std;
void targetSum(vector<int>&arr, int target){
    int n = arr.size();
   for(int i = 0; i<n; i++){
    for(int j = i+1; j<n; j++){
        if(arr[i]+arr[j]==target){
            cout<<"("<<arr[i]<<","<<arr[j]<<")";
            break;
        }
      }
   }
}
int main()
{
    vector<int>arr = {1, 5, 7, -1, 5};
    int target = 6;
    targetSum(arr, target);
    return 0;
}