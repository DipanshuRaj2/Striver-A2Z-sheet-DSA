/*Problem statement
You are given 'n' roses and you are also given an array 'arr' where 'arr[i]' denotes that the 'ith' rose will bloom on the 'arr[i]th' day.



You can only pick already bloomed roses that are adjacent to make a bouquet. You are also told that you require exactly 'k' adjacent bloomed roses to make a single bouquet.



Find the minimum number of days required to make at least 'm' bouquets each containing 'k' roses. Return -1 if it is not possible.



Example :
Input: n = 9,  arr = [ 1, 2, 1, 2, 7, 2, 2, 3, 1 ], k = 3, m = 2

Output: 3. 

Explanation: This is because on the 3rd day: all the roses with 'arr[i]' less than equal to 3 have already bloomed, this means every rose except the 5th rose has bloomed. Now we can form the first bouquet from the first three roses and the second bouquet from the last three roses.*/
#include<bits/stdc++.h>
using namespace std;
bool possible(vector<int>&arr, int day, int m, int k){
    int cnt = 0; int noOfBouquet = 0;
    for(int i = 0; i<arr.size(); i++){
        if(arr[i] <= day){
            cnt++;
        }
        else if(arr[i] > day){
            int num = cnt/k;
            noOfBouquet = noOfBouquet + num;
            cnt = 0;
        }
    }
    noOfBouquet = noOfBouquet + (cnt/k);
    return noOfBouquet >= m;
   
}
int minDays(vector<int>& bloomDay, int m, int k){
        int maxi = INT_MIN;
        int mini = INT_MAX;
    for(int i = 0; i<bloomDay.size(); i++){
        mini = min(mini, bloomDay[i]);
        maxi = max(maxi, bloomDay[i]);
    }
    if(m * k > bloomDay.size()){
        return -1;
    }
    for(int i = mini; i<=maxi; i++){
        if(possible(bloomDay, i, m, k)){
            return i;
        }
    }
    return -1;
}
int main()
{

    vector<int> arr = {1,10,3,10,2};
    int m = 3; int k = 1;
    cout<<minDays(arr, m, k);
    
   return 0;
}