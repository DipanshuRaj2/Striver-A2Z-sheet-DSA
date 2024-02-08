#include<bits/stdc++.h>
using namespace std;
int maximumSubArray(vector<int>&v){
    int maxi = INT_MIN;
    for(int i = 0; i<v.size(); i++){
        int sum = 0;
        for(int j = i;j<v.size(); j++){
            sum = sum+v[j];

            maxi = max(maxi, sum);
        }
    }
    return maxi;
}
int main()
{
    vector<int> v={-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout<<maximumSubArray(v);
   
   return 0;
}
// kadane algorithm