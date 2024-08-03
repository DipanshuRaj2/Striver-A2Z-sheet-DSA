#include <bits/stdc++.h>
using namespace std;
int minDifference(vector<int>arr, int n, int m){
    int ans = INT_MAX;
    sort(arr.begin(), arr.end());
    for(int i = 0; i <= n - m; i++){
        int maxi = arr[m + i - 1];
        int low = arr[i];
        ans = min(ans, maxi - low);
    }
    return ans;
}
int main()
{
   vector<int>ans =  {3, 4, 1, 9, 56, 7, 9, 12};
   int n = ans.size(); int m = 5;
   cout<<minDifference(ans, n ,m);
    return 0;
}