#include <bits/stdc++.h>
using namespace std;
vector<vector<int>>subsets(vector<int>& arr){
    int n = 1<<arr.size();
    vector<vector<int>>ans;
    for(int i = 0; i<n; i++){
        vector<int>list;
        for(int j = 0; j<ans.size(); j++){
            if((1<<j)&i){
                list.push_back(arr[j]);
            }
        }
        ans.push_back(list);
    }
    return ans; 
}
int main()
{
    vector<int>arr = {4,5,3,9};
    vector<vector<int>>ans = subsets(arr);
    cout<<"{";
    for(int i = 0; i<ans.size(); i++){
        cout<<"{";
        for(int j = 0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"},";
    }
    cout<<"}";

    return 0;
}