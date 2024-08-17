#include <bits/stdc++.h>
using namespace std;
int maxArray(vector<int> &arr, int i, int n)
{
    if(i == n-1){
        return arr[i];
    }
    int maxi = max(arr[i], maxArray(arr, i+1, n));
    return maxi;
}
int main()
{
    vector<int> arr = {1, 4, 15, 3, 7, 6};
    int res = maxArray(arr, 0, arr.size());
    cout << res;
    return 0;
}