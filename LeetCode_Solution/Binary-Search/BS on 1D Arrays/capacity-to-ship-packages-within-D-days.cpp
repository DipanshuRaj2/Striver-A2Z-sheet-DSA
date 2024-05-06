/*
1011. Capacity To Ship Packages Within D Days
A conveyor belt has packages that must be shipped from one port to another within days days.

The ith package on the conveyor belt has a weight of weights[i]. Each day, we load the ship with packages on the conveyor belt (in the order given by weights). We may not load more weight than the maximum weight capacity of the ship.

Return the least weight capacity of the ship that will result in all the packages on the conveyor belt being shipped within days days.

 

Example 1:

Input: weights = [1,2,3,4,5,6,7,8,9,10], days = 5
Output: 15
Explanation: A ship capacity of 15 is the minimum to ship all the packages in 5 days like this:
1st day: 1, 2, 3, 4, 5
2nd day: 6, 7
3rd day: 8
4th day: 9
5th day: 10

Note that the cargo must be shipped in the order given, so using a ship of capacity 14 and splitting the packages into parts like (2, 3, 4, 5), (1, 6, 7), (8), (9), (10) is not allowed.
Example 2:

Input: weights = [3,2,2,4,1,4], days = 3
Output: 6
Explanation: A ship capacity of 6 is the minimum to ship all the packages in 3 days like this:
1st day: 3, 2
2nd day: 2, 4
3rd day: 1, 4
Example 3:

Input: weights = [1,2,3,1,1], days = 4
Output: 3
Explanation:
1st day: 1
2nd day: 2
3rd day: 3
4th day: 1, 1
 

Constraints:

1 <= days <= weights.length <= 5 * 104
1 <= weights[i] <= 500
*/
// #include<bits/stdc++.h>
// using namespace std;
// class Solution{
//     public:
//     int fun(vector<int>&wt, int cap){
//         int days = 1; int load = 0;
//         for(int i = 0; i<wt.size(); i++){
//             if(load + wt[i] > cap){
//                 days = days + 1;
//                 load = wt[i];
//             }
//             else{
//                 load += wt[i];
//             }
//         }
//         return days;
//     }
//     int shipWithinDays(vector<int>weights, int days){
//         int maxi = INT_MIN;
//         int sum = 0; 
//         for(int i = 0; i<weights.size(); i++){
//             maxi = max(maxi , weights[i]);
//             sum += weights[i];
//         }

//         for(int capacity = maxi; capacity<=sum; capacity++){
//             int dayReq = fun(weights, capacity);
//             if(dayReq <= days){
//                 return capacity;
//             }
//         }
//         return 0; 
//     }
// };
// int main()
// {
//     Solution sol;
//     vector<int>nums = {1,2,3,1,1}; 
//     int days = 4;
//     cout<<sol.shipWithinDays(nums, days);
//    return 0;
// }


// Now i am trying within one function
// #include<bits/stdc++.h>
// using namespace std;
// class Solution{
//     public:
//     int shipWithinDays(vector<int>&weights, int days){
//         int maxi = INT_MIN; int sum = 0;
//         for(int i = 0; i<weights.size(); i++){
//             maxi = max(maxi , weights[i]);
//             sum += maxi;
//         }
//         for(int capacity = maxi; capacity<= sum; capacity++){
//             int load = 0; int nodays = 1;
//             for(int j = 0; j<weights.size();j++){
//                 if(load + weights[j] > capacity){
//                     days = days + 1;
//                     load = weights[j];
//                 }
//                 else{
//                     load += weights[j];
//                 }
//             }
//             if(nodays <= days){
//                 return capacity;
//             }
//         }
//         return 0;
//     }
// };
// int main()
// {
//      Solution sol;
//     vector<int>nums = {1,2,3,1,1}; 
//     int days = 4;
//     cout<<sol.shipWithinDays(nums, days);
//     return 0;
// }

// using binary serach it is very easy pass all the test case 


#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int fun(vector<int>&weights, int nodays){
        int loads = 0; int days = 1;
        for(int i = 0; i<weights.size(); i++){
            if(loads + weights[i] > nodays){
                days = days + 1;
                loads = weights[i];
            }
            else{
                loads += weights[i];
            }
        }
        return days;
    }
int shipWithinDays(vector<int>weights, int days){
    int maxi = INT_MIN;
    int sum = 0;
    for(int i = 0; i<weights.size(); i++){
        maxi = max(maxi, weights[i]);
        sum += weights[i];
    }
    int low = maxi; int high = sum;
    int ans = 0;
    while(low <= high){
        int mid = (low+high)/2;
        int noDays = fun(weights, mid);
        if(noDays <= days){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return ans;
   }
};
int main()
{
    Solution sol;
    vector<int>nums = {1,2,3,1,1}; 
    int days = 4;
    cout<<sol.shipWithinDays(nums, days);
   return 0;
} 