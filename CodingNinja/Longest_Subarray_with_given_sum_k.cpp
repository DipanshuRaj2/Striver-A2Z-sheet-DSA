#include<bits/stdc++.h>
using namespace std;
int getLongestSubArray(vector<int>&nums, int k){

    int maxLen = 0;
    int sum = 0;
    map<int, int>prefixSumMap;
    for(int i = 0; i<nums.size(); i++){
        sum += nums[i];

        if(sum == k){
            maxLen = max(maxLen , i+1);
        }

        int rem = sum - k;
        if(prefixSumMap.find(rem) != prefixSumMap.end()){
            int len = i - prefixSumMap[rem];
            maxLen = max(len, maxLen);
        }
        if(prefixSumMap.find(sum) == prefixSumMap.end()){ // it will written for edge case where if sum of next ele equal to sum then it will not update
            prefixSumMap[sum] = i;
        }
    }
    return maxLen;
}
int main()
{
    vector<int>nums = {2,0,0,3}; //edge case example
    int k = 3;
    cout<<getLongestSubArray(nums , k);

   return 0;
}