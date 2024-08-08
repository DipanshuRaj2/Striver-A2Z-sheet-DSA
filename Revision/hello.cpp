#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>ans;
    int cnt = 2;
    int temp = 1;
    int n = 10;
    ans.push_back(temp);
    for(int i = 0; i < n; i++){
        temp = temp + cnt;
        cnt++;
        ans.push_back(temp);
    }
    for(int i = 0;i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}