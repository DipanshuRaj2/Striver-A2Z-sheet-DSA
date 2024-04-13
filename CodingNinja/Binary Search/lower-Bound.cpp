#include<bits/stdc++.h>
using namespace std;
int lowerBound(vector<int>arr, int n, int x){
    for(int i = 0; i<n; i++){
        cout<<i<<endl;
        if(arr[i] >= x){
            return i;
        }
    }
}
int main()
{
    vector<int>arr={1,2,2,3,3,5};
    int x = 7;
    int n = arr.size();
    
    cout<<lowerBound(arr, x, n);
    return 0;
}