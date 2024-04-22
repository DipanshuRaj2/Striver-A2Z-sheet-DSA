/*You are given an array 'arr' having 'n' distinct integers sorted in ascending order. The array is right rotated 'r' times



Find the minimum value of 'r'.



Right rotating an array means shifting the element at 'ith' index to (‘i+1') mod 'n' index, for all 'i' from 0 to ‘n-1'.



Example:
Input: 'n' = 5 , ‘arr’ = [3, 4, 5, 1, 2]

Output: 3 

Explanation:
If we rotate the array [1 ,2, 3, 4, 5] right '3' times then we will get the 'arr'. Thus 'r' = 3.
*/
#include<bits/stdc++.h>
using namespace std;

int findKRotation(vector<int>&arr){
int mini  = INT_MAX;
    int index = 0; 
    for(int i = 0; i<arr.size(); i++){
        if(arr[i] < mini){
            mini = arr[i];
            index = i;
        }
    }  
    return index;
}
int main()
{
    vector<int>nums = {3, 4, 5, 1, 2};
    cout<<findKRotation(nums);
   return 0;
}
