/*You are given a set of numbers and you can arrange them
penalty equal to the sum of the absolute differences betwe
You are needed to return the minimum penalty that sh

input Format
Input 1: Size of the array of integer numbers (2<input< 10001)
Input 2: Integer Array(1 <= input <= 10000 )

Example 1:

input 1: {1,3,2}

output :  2

*/

#include <bits/stdc++.h>
using namespace std;
int miniDifference(vector<int>&arr){
    sort(arr.begin(), arr.end());
    int sum = 0; 
    for(int i = 1; i<arr.size(); i++){
        sum = sum + abs(arr[i] - arr[i-1]);
    }
    return sum;
}
int main()
{
    vector<int>arr = {1, 3, 2, 4};
    int n = miniDifference(arr);
    cout<<n;
    return 0;
}
