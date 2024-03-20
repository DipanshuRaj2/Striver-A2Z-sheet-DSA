/*Problem statement
You are given an array 'a' of size 'n' and an integer 'k'.



Find the length of the longest subarray of 'a' whose sum is equal to 'k'.



Example :
Input: ‘n’ = 7 ‘k’ = 3
‘a’ = [1, 2, 3, 1, 1, 1, 1]

Output: 3

Explanation: Subarrays whose sum = ‘3’ are:

[1, 2], [3], [1, 1, 1] and [1, 1, 1]

Here, the length of the longest subarray is 3, which is our final answer.

Sample Input 1 :
7 3
1 2 3 1 1 1 1


Sample Output 1 :
3


Explanation Of Sample Input 1 :
Subarrays whose sum = ‘3’ are:
[1, 2], [3], [1, 1, 1] and [1, 1, 1]
Here, the length of the longest subarray is 3, which is our final answer.


Sample Input 2 :
4 2
1 2 1 3


Sample Output 2 :
1


Sample Input 3 :
5 2
2 2 4 1 2 


Sample Output 3 :
1
*/


// First solution is approx O(n^3);
// #include<bits/stdc++.h>
// using namespace std;
// int maxLength(vector<int>&v, int target){
//     int n = v.size();
    
//     int len = 0;
//     for(int i = 0; i<n; i++){
//         for(int j = i; j < n; j++){
//             int sum = 0;
//             for(int k=i; k <=j; k++){
//                 sum = sum +v[k];
//             }
//             if(sum == target){
//                 len = max(len, j-i+1);
//             }
//         }
//     }
//     return len;
// }
// int main()
// {
//     vector<int> v={1,2,3,1,1,1,1,1,4,2,3};
//     int target = 3;
//     int n = maxLength(v , target);
//     cout<<n;
//    return 0;
// }


//second solution is O(n^2);

// #include<bits/stdc++.h>
// using namespace std;
// int maxLength(vector<int>v , int target){
//     int n = v.size();
//     int len = 0;
//     for(int i = 0; i<n; i++){
//         int sum = 0;
//         for(int j = i; j<n; j++){
//             sum += v[j]; 
//             if(sum>target){
//                 break;
//             }
//             if(sum == target){
//                 len = max(len, j - i + 1);
//             }
//         } 
//     }
//     return len;
// }
// int main()
// {
//     vector<int>v = {1,2,3,1,1,1,1,1,4,2,3};
//     int target = 3;
//     cout<<maxLength(v, target);
//    return 0;
// }

//  better approach t.complexity = O(n logn)


// #include<bits/stdc++.h>
// using namespace std;
// int getLongestSubArray(vector<int>&nums, int k){

//     int maxLen = 0;
//     int sum = 0;
//     map<int, int>prefixSumMap;
//     for(int i = 0; i<nums.size(); i++){
//         sum += nums[i];

//         if(sum == k){
//             maxLen = max(maxLen , i+1);
//         }

//         int rem = sum - k;
//         if(prefixSumMap.find(rem) != prefixSumMap.end()){
//             int len = i - prefixSumMap[rem];
//             maxLen = max(len, maxLen);
//         }
//         if(prefixSumMap.find(sum) == prefixSumMap.end()){ // it will written for edge case where if sum of next ele equal to sum then it will not update
//             prefixSumMap[sum] = i;
//         }
//     }
//     return maxLen;
// }
// int main()
// {
//     vector<int>nums = {2,0,0,3}; //edge case example
//     int k = 3;
//     cout<<getLongestSubArray(nums , k);

//    return 0;
// }


//optimal approach
#include<bits/stdc++.h>
using namespace std;
int longestSubarrayWithSumK(vector<int> a, int k){
    int left = 0, right = 0;
    int sum = a[0];
    int maxLen = 0;
    int n = a.size();

    while(right < n){
        while(left <= right && sum > k){
            sum -= a[left];
            left++;
        }
        if(sum == k){
            maxLen = max(maxLen, right-left +1);
        }
        right++ ;
        if(right < n){
        sum += a[right];
        }
    }
    return maxLen;
}
int main()
{
    vector<int>a = {1,2,3,1,1,1,1,3,3};
    int k = 6;
    cout<<longestSubarrayWithSumK(a , k);
   return 0;
}