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
// #include<bits/stdc++.h>
// using namespace std;
// bool canWePlace(vector<int>& arr, int &dist, int &cows){
//     int cntCows = 1; int live = arr[0];
//     for(int i = 1; i<arr.size(); i++){
//         if(arr[i] - live >= dist){
//             cntCows++;
//             live = arr[i];
//         }
//         if(cntCows >= cows){
//             return true;;
//         }
//     }
//     return false;
// }
// int aggressiveCows(vector<int>stalls, int cows){
//     int n = stalls.size();
//     sort(stalls.begin(), stalls.end());
//     int maxi = stalls[n-1];
//     int mini = stalls[0];

//     for(int i = 1; i<= maxi - mini; i++){

//         if(canWePlace(stalls, i, cows) == true){
//             continue;
//         }
//         else if (canWePlace(stalls, i, cows) == false){
//             return i - 1;
//         } 
//         cout<< i<<" ";
//    }
// }
// int main()
// {
//     vector<int>arr = {0,3,4,7,10,9};
//     int cows = 4;
//     cout<<aggressiveCows(arr, cows);
//    return 0;
// }



// i am trying in single function

// #include<bits/stdc++.h>
// using namespace std;
// int aggressiveCows(vector<int>& stall, int cows){
//     int n = stall.size();
//     sort(stall.begin(), stall.end());
//     int maxi = stall[n-1];
//     int mini = stall[0];
//     int result = -1;
    
//     for(int i = 1; i<=maxi - mini; i++){
//         int cntCows = 1; int live = stall[0];
//         for(int j = 1; j<n; j++){
//             if(stall[j] - live >= i){
//                 cntCows++;
//                 live = stall[j];
//             }
//         }
//         if(cntCows == cows){
//             result = i;
//         }
//     }
//     return result;
// }
// int main()
// {
//     vector<int>stalls = {0, 3, 4, 7, 10, 9};
//     int k = 4;
//     cout<<aggressiveCows(stalls, k);
//     return 0;
// }
// overall time complexity O(n logn) + O(n^2);

// optimise the code and we use binary serach
#include<bits/stdc++.h>
using namespace std;
bool canWePlace(vector<int>& stalls, int dist, int cows){
    int cntCows = 1; int live = stalls[0];
    for(int i = 1; i<stalls.size(); i++){
        if(stalls[i] - live >= dist){
            cntCows++;
            live = stalls[i];
        }
        if(cntCows >=  cows){
            return true;
        }
    }
    return false;
}
int aggressiveCows(vector<int>& stalls, int cows){
    int n = stalls.size();
    sort(stalls.begin(), stalls.end());
    int mini = 0;
    int maxi = stalls[n-1];
    int low = stalls[0]; int high = maxi - mini;
    int ans = -1;
    while(low <= high){
        int mid = (low+high)/2;
        if(canWePlace(stalls, mid, cows)== true){
            ans = mid ;
            low = mid +1;
        }
        else{
            high = mid - 1;
        }
    }
    return ans;
}
int main()
{
    vector<int>stalls = {0, 3, 4, 7, 10, 9};
    int k = 4;
    cout<<aggressiveCows(stalls, k);
   return 0;
}
////