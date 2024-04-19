#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& arr, int target) {
        int n = arr.size();
        int low = 0; 
        int high = n - 1;
        int ans = n;
        while(low <= high){
            int mid = (low+high)/2;

            if(arr[mid] >= target){
                ans = mid;

                high = mid - 1;

            }
            else {
                low = mid +1;
            }
        }
        return ans;
    }   
};
int main()
{
    Solution sol;
    vector<int>arr={1,3,5,6};
    int target = 5;
    cout<<sol.searchInsert(arr, target);
   return 0;
}
