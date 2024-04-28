/*Koko loves to eat bananas. There are n piles of bananas, the ith pile has piles[i] bananas. The guards have gone and will come back in h hours.

Koko can decide her bananas-per-hour eating speed of k. Each hour, she chooses some pile of bananas and eats k bananas from that pile. If the pile has less than k bananas, she eats all of them instead and will not eat any more bananas during this hour.

Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.

Return the minimum integer k such that she can eat all the bananas within h hours.



Example 1:

Input: piles = [3,6,7,11], h = 8
Output: 4
Example 2:

Input: piles = [30,11,23,4,20], h = 5
Output: 30
Example 3:

Input: piles = [30,11,23,4,20], h = 6
Output: 23*/

// using brute force approach
// #include<bits/stdc++.h>
// using namespace std;
// class Solution{
//     public:
//     int minEatingSpeed(vector<int>& piles, int h){

//             int maxi = INT_MIN;
//             for(int i = 0; i<piles.size(); i++){   // maximum ele. found
//                 if(piles[i] > maxi){
//                     maxi = piles[i];
//                 }
//             }

//             for(int i = 1; i<=maxi; i++){
//                 int hrs = 0;
//                 for(int j = 0; j<piles.size(); j++){
//                     int pileshour = ceil((double)piles[j] / (double)i);
//                     hrs = hrs +pileshour;
//                     if(hrs > h){
//                         break;
//                     }
//                 }
//                 if(hrs <= h){
//                     return i;
//                 }
//             }
//         return -1;
//     }

// };
// int main()
// {
//     Solution sol;
//     vector<int>piles = {30,11,23,4,20} ;//{3,6,7,11};
//     int h = 5;
//     cout<<sol.minEatingSpeed(piles, h); // output how many banana eating koko in 1 hrs;
//    return 0;
// }

// this code take O(n*n) time complexity

// now i have to write a code which take complexity O(n logn);

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int calculateTotalHours(vector<int>&piles, int hourly){
        int totalH = 0;
        int n = piles.size();
        for(int i = 0; i<n; i++){
            int hour = ceil((double)piles[i] / double(hourly));
            totalH = totalH + hour;
    }
    return totalH;
}
    int minEatingSpeed(vector<int> &piles, int h)
    {
        int maxi = INT_MIN;
        for (int i = 0; i < piles.size(); i++)
        {
            if (piles[i] > maxi)
            {
                maxi = piles[i];
            }
        }
        int low = 1;
        int high = maxi;
        int ans = 0;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            int totalH = calculateTotalHours(piles, mid);

            if (totalH <= h)
            {
                ans = mid;
                high = mid - 1;
            }
            else if (totalH > h)
            {
                low = mid + 1;
            }
        }
        return ans;
    }
};

int main()
{
    Solution sol;
    vector<int> piles = {30, 11, 23, 4, 20}; //{3,6,7,11};
    int h = 5;
    cout << sol.minEatingSpeed(piles, h); // output how many banana eating koko in 1 hrs;
    return 0;
}
