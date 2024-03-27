/*Problem statement
Given an array ‘A’ consisting of ‘N’ integers and an integer ‘B’, find the number of subarrays of array ‘A’ whose bitwise XOR( ⊕ ) of all elements is equal to ‘B’.



A subarray of an array is obtained by removing some(zero or more) elements from the front and back of the array.



Example:
Input: ‘N’ = 4 ‘B’ = 2
‘A’ = [1, 2, 3, 2]

Output: 3

Explanation: Subarrays have bitwise xor equal to ‘2’ are: [1, 2, 3, 2], [2], [2].
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
4 2
1 2 3 2
Sample Output 1 :
3
Explanation Of Sample Input 1:
Input: ‘N’ = 4 ‘B’ = 2
‘A’ = [1, 2, 3, 2]

Output: 3

Explanation: Subarrays have bitwise xor equal to ‘2’ are: [1, 2, 3, 2], [2], [2].*/
// #include<bits/stdc++.h>
// using namespace std;
// int subarraysWithXorK(vector<int> &A, int B){
//     int n = A.size();
//     int cnt = 0;
//     for(int i = 0; i<n; i++){
//        int sum = 0;
//        for(int j = i; j<n; j++){
//         sum ^= A[j];
//         if(sum == B){
//             cnt++;
//         } 
//        }
        
//     }
//     return cnt;
// }
// int main()
// {
//     vector<int> arr = {1, 2, 3, 2};
//     int k = 2;
//     cout <<subarraysWithXorK(arr , k);
//    return 0;
// }

//above solution is O(n^2) so we have to optimised the code

#include<bits/stdc++.h>
using namespace std;
int subarraysWithXorK(vector<int>&A, int B){
    int xr = 0;
    int cnt = 0;
    int n = A.size();
    map<int, int>mpp;
    mpp[xr]++; //{0, 1}
    for(int i = 0; i<n; i++){
        xr = xr ^ A[i];
        int k = xr ^ B;
        cnt += mpp[k];
        mpp[xr]++;
    }
    return cnt;
}
int main()
{
    vector<int> arr = {1, 2, 3, 2};
    int k = 2;
    cout <<subarraysWithXorK(arr , k);
   return 0;
}
