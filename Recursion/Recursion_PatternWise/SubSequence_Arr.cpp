#include <bits/stdc++.h>
using namespace std;
void printf(int i, vector<int>&ds, vector<int>&arr, int n){
    if(i >= n){
        for(auto it: ds){
            cout<<it <<" ";
        }
        if(ds.size()== 0) cout<<"{}";
        cout<<endl;
        return;
    }
    printf(i+1, ds, arr, n);
    ds.push_back(arr[i]);
    printf(i+1, ds, arr, n);
    ds.pop_back();
}
int main() 
{
    vector<int> arr = {1, 2};
    vector<int>ds;
    int n = arr.size();
    printf(0, ds, arr, n);
    return 0;
}