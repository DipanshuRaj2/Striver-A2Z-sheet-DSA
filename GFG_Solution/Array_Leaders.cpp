#include<bits/stdc++.h>
using namespace std;
class Solution {
    // Function to find the leaders in the array.
  public:
  // brute force approach
    vector<int> leaders(int n, vector<int>& arr) {
        // Code here
        vector<int>ans;
        for(int i = 0; i<n; i++){
            int ele = arr[i];
            for(int j = i+1; j<n; j++){
                if(ele <= arr[j]){
                    ele = -1;
                    break;
                }
                else{
                    continue;
                }
            }
            if(ele != -1){
                ans.push_back(ele);
            }
        }
        return ans;
    }
    
    vector<int> Leaders(int n, vector<int>arr){
        int mini = INT_MIN;
        vector<int>ans;
        for(int i = n; i >= 0; i--){
            if(arr[i] > mini){
                ans.push_back(arr[i]);
            }
        }
        return arr;
    }
};
int main(){
    Solution sol;
    vector<int>arr = {16,17,4,3,5,2};
    int n = arr.size();
    arr = sol.leaders(n, arr);
    for(int i = 0; i<arr.size(); i++){
        cout<<arr[i] <<" ";
    }
    return 0;
}