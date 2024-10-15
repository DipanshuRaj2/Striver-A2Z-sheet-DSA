#include<bits/stdc++.h>
using namespace std;
int maxScore(vector<int>&arr, int k){
    int lsum = 0; int rsum = 0;
    int maxSum = 0;
    for(int i = 0; i<k; i++){
        lsum += arr[i];
    }
    maxSum = lsum;
    int right = arr.size()-1;
    for(int i = k-1; i>=0; i--){
        lsum -= arr[i];
        rsum += arr[right];
        right--;
        maxSum = max(maxSum , lsum+rsum);
    }
    return maxSum;
}
int main(){
    vector<int>arr = {1,79,80,1,1,1,200,1};
    int k = 3;
    cout<<maxScore(arr,k);
    return 0;
}  
