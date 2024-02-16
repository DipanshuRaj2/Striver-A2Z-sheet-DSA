#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<int>calculateSpan(int arr[], int n){
        vector<int>v;
        for(int i = 0; i<n; i++){
            int span = 1;
            for(int j = i-1; j>=0 && arr[j]<=arr[i]; j--){
                span++;
            }
            v.push_back(span);
        }
        return v;
    }
};
int main()
{
    Solution sol;
    int arr[]= {100, 80, 60, 70, 60, 75, 85};
    int n = sizeof(arr)/sizeof(arr[0]);

    vector<int>v= sol.calculateSpan(arr, n);;
    
    for(int i = 0; i<n ;i++){
        cout<<v[i]<<" ";
    }


    return 0;
}