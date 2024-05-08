/*Problem statement
You are given an array 'arr' consisting of 'n' integers which denote the position of a stall.



You are also given an integer 'k' which denotes the number of aggressive cows.



You are given the task of assigning stalls to 'k' cows such that the minimum distance between any two of them is the maximum possible.



Print the maximum possible minimum distance.



Example:
Input: 'n' = 3, 'k' = 2 and 'arr' = {1, 2, 3}

Output: 2

Explanation: The maximum possible minimum distance will be 2 when 2 cows are placed at positions {1, 3}. Here distance between cows is 2.
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1 :
6 4
0 3 4 7 10 9


Sample Output 1 :
3


Explanation to Sample Input 1 :
The maximum possible minimum distance between any two cows will be 3 when 4 cows are placed at positions {0, 3, 7, 10}. Here distance between cows are 3, 4 and 3 respectively.


Sample Input 2 :
5 2
4 2 1 3 6


Sample Output 2 :
5*/
#include<bits/stdc++.h>
using namespace std;
bool canWePlace(vector<int>& arr, int &dist, int &cows){
    int cntCows = 1; int live = arr[0];
    for(int i = 1; i<=arr.size(); i++){
        if(arr[i] - live >= dist){
            cntCows++;
            live = arr[i];
        }
        if(cntCows >= cows){
            return true;;
        }
    }
    return false;
}
int aggressiveCows(vector<int>stalls, int cows){
    int n = stalls.size();
    sort(stalls.begin(), stalls.end());
    int maxi = stalls[n-1];
    int mini = stalls[0];

    for(int i = 1; i<= maxi - mini; i++){
        if(canWePlace(stalls, i, cows) == true){
            continue;
        }
        else{
            return i - 1;
        } 
   }
}
int main()
{
    vector<int>arr = {0,3,4,7,10,9};
    int cows = 4;
    cout<<aggressiveCows(arr, cows);
   return 0;
}