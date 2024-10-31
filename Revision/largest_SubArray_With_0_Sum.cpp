#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
  //brute force  
  // give tle 102/400 test case
    int maxLen(vector<int>& arr, int n) {
        // Your code here
        if(n == 1 && arr[0] == 0) return 1;
        int maxi = 0;
        for(int i = 0; i<n-1; i++){
            int sum = arr[i]; 
            for(int j = i+1; j<n; j++){
                sum += arr[j];
                if(sum == 0){
                    int len = j - i + 1;
                    maxi = max(maxi, len);
                }   
            }
        }
        return maxi;
    }
    //optimal approach 

    int maxLen1(vector<int>&arr, int n){
        int maxi = 0;
        int sum = 0;
        unordered_map<int, int>ump; //(store prefixSum, index)
        for(int i = 0; i<arr.size(); i++){
           sum += arr[i];
            if(sum == 0){
                maxi = i + 1;
            }
            else{
                if(ump.find(sum) != ump.end()){
                    maxi = max(maxi, i - ump[sum]);
                }
                else{
                    ump[sum] = i;
                }
            }
        }
        return maxi;
    }
};
int main(){
    Solution* sol = new Solution();
    vector<int>arr = {15,-2,2,-8,1,7,10,23};
    int n = arr.size();
    cout<<sol->maxLen1(arr, n);
    return 0;
}