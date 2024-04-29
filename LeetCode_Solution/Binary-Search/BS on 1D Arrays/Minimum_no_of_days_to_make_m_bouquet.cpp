#include<bits/stdc++.h>
using namespace std;
int main()
{
    int maxi = INT_MIN;
    int mini = INT_MAX;
    vector<int> arr = {1,10,3,10,2};
    for(int i = 0; i<arr.size(); i++){
        if(arr[i] > maxi){
            maxi = arr[i];
        }
        else if(arr[i] < mini){
            mini = arr[i];
        }
    }
    cout<< maxi << " "<<mini;
   return 0;
}