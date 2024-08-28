#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    // Function to find pair with maximum sum
    int pairWithMaxSum(vector<int> &arr) {
        // Your code goes here
        int maxi = INT_MIN;
        for(int i = 0; i<arr.size()-1; i++){
            if(arr[i] + arr[i+1] > maxi){
                maxi = (arr[i] + arr[i+1]);
            }
        }
        return maxi;
    }
};
int main()
{
    Solution sol;
    vector<int>arr = {4, 3, 1, 5, 6};
    cout<<sol.pairWithMaxSum(arr);
    return 0;
}       