/*Given an array A[ ] of positive integers of size N, where each value represents the number of chocolates in a packet. Each packet can have a variable number of chocolates. There are M students, the task is to distribute chocolate packets among M students such that :
1. Each student gets exactly one packet.
2. The difference between maximum number of chocolates given to a student and minimum number of chocolates given to a student is minimum.

Example 1:

Input:
N = 8, M = 5
A = {3, 4, 1, 9, 56, 7, 9, 12}
Output: 6
Explanation: The minimum difference between maximum chocolates and minimum chocolates is 9 - 3 = 6 by choosing following M packets :{3, 4, 9, 7, 9}.*/
#include <bits/stdc++.h>
using namespace std;
int minDifference(vector<int>arr, int n, int m){
    int ans = INT_MAX;
    sort(arr.begin(), arr.end());
    for(int i = 0; i <= n - m; i++){
        int maxi = arr[m + i - 1];
        int low = arr[i];
        ans = min(ans, maxi - low);
    }
    return ans;
}
int main()
{
   vector<int>ans =  {3, 4, 1, 9, 56, 7, 9, 12};
   int n = ans.size(); int m = 5;
   cout<<minDifference(ans, n ,m);
    return 0;
}