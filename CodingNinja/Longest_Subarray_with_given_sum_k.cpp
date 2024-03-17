/*Problem statement
Ninja and his friend are playing a game of subarrays. They have an array ‘NUMS’ of length ‘N’. Ninja’s friend gives him an arbitrary integer ‘K’ and asks him to find the length of the longest subarray in which the sum of elements is equal to ‘K’.

Ninjas asks for your help to win this game. Find the length of the longest subarray in which the sum of elements is equal to ‘K’.

If there is no subarray whose sum is ‘K’ then you should return 0.

Example:
Input: ‘N’ = 5,  ‘K’ = 4, ‘NUMS’ = [ 1, 2, 1, 0, 1 ]

Output: 4

There are two subarrays with sum = 4, [1, 2, 1] and [2, 1, 0, 1]. Hence the length of the longest subarray with sum = 4 is 4.
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= T <= 10
1 <= N <= 10^5
-10^6 <= NUMS[ i ] <= 10^6
-10^6 <= K <= 10^6

Sum of N Over all the Test cases <= 10^5

Time Limit: 1 sec
Sample Input 1 :
2
3 5
2 3 5
3 1
-1 1 1
Sample Output 1 :
2
3
Explanation Of Sample Input 1 :
For the first case:
There are two subarrays with sum = 5, [2, 3] and [5]. Hence the length of the longest subarray is 2.

For the second case:
Longest subarray with sum = 1 is [1, -1, 1].
Sample Input 2 :
2
3 4
1 1 1
3 2
-50 0 52
Sample Output 2 :
0 
3
*/

#include<bits/stdc++.h>
using namespace std;
int getLongestSubArray(vector<int>&nums, int k){
    int maxLen = 0;
    for(int i = 0; i<nums.size(); i++){
        int sum = 0;
        for(int j = i; j<nums.size(); j++){
            sum += nums[j];
            if(sum == k){
            maxLen = max(maxLen, j-i+1);
            }
        }
    }
    return maxLen;
}
int main()
{
    vector<int>nums ={1, 2, 1, 0, 1};
    int k = 3;
    cout<<getLongestSubArray(nums, k);
   return 0;
}




// optimal approach TLE = O(n logn) SpaceComplexity = O(n);

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

