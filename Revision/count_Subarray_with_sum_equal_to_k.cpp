// brute force is easy 
// just using 2 loop and check the sum equals to k;

//optimal approach use hash map
//hash map store <prefixsum, cnt>
//we just check (prefix - k) present in the map if present and store in the count ;
// simple approach

#include<bits/stdc++.h>
using namespace std;
int count_Subarray(vector<int>&arr, int k){
    unordered_map<int, int>ump; //store prefixSum, cnt;
    ump[0] = 1;
    int preSum = 0; int cnt = 0;
    for(int i = 0; i<arr.size(); i++){
        preSum += arr[i];
        int remove = preSum - k;
        cnt += ump[remove];
        ump[preSum] += 1; //ump[preSum] = ump[preSum] + 1;

    }
    return cnt;
}
int main(){
    vector<int>arr = {3, -3, 1, 1, 1};
    int k = 3;
    cout<<count_Subarray(arr, k);
   return 0;
}