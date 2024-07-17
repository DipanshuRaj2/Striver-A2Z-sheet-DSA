/*Problem Statement



You are given an integer array nums containing distinct numbers, and you can perform the following operations until the array is empty:



If the first element has the smallest value, remove it.
Otherwise, put the first element at the end of the array.


Return an integer denoting the number of operations it takes to make nums empty.



Example 1



Input: 

3

3 4 -1



Output: 

5



Explanation:





Example 2



Input:

4

1 2 4 3



Output:

5



Explanation:





Example 3



Input:

3

1 2 3



Output:

3



Explanation:



Input format :
The first line contains an integer N, the size of the array nums.

The second line contains N space-separated integers num[i], representing the elements of nums.

Output format :
The output displays an integer denoting the number of operations it takes to make nums empty.



Refer to the sample output for the formatting specifications.

Code constraints :
The given test case will fall under the following constraints:

2 ≤ N ≤ 10

-100 ≤ num[i] ≤100

Sample test cases :
Input 1 :
3
3 4 -1
Output 1 :
5
Input 2 :
4
1 2 4 3
Output 2 :
5
Input 3 :
3
1 2 3
Output 3 :
3 */
#include<bits/stdc++.h>
using namespace std;
int smalli(vector<int>&arr, int n){
    int maxi = INT_MAX;
    for(int i = 0; i<arr.size();i++){
        if(arr[i] <= maxi){
            maxi = arr[i];
        }
    }
    return maxi;
}

int countTheRemove(vector<int>&arr, int n){
    int cnt = 0;
   
    while(arr.size() != 0){
        int small = smalli(arr, arr.size());
        if(small == arr[0]){
            arr.erase(arr.begin());
            cnt++;
        }
        else{
            int temp = arr[0];
            arr.push_back(arr[0]);
            arr.erase(arr.begin());
            cnt++;
        }
    }
    return cnt;
}
int main(){
    // int n;
    // cin >> n;
    vector<int>arr={1,2,3};
    int n = arr.size();
    
    cout<<countTheRemove(arr, n);
    
    return 0;
}

