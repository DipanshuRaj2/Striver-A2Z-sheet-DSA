#include <bits/stdc++.h>
using namespace std;
int maxFriends(int n , vector<int>&s, vector<int>&e){
    vector<pair<int, int>>vp;
    for(int i = 0; i<n; i++){
        vp.push_back({s[i], 1});
        vp.push_back({e[i]+1, -1});
    }
    sort(vp.begin(), vp.end());

    int currentFriend = 0;
    int maxFriend = 0; 
    for(auto ele: vp){
        currentFriend = currentFriend + ele.second;
        maxFriend = max(maxFriend, currentFriend);
    }
    return maxFriend;
}
int main()
{
    vector<int>s = {1, 2, 3, 4};
    vector<int>e = {10, 3, 3, 4};
    int n = s.size();
    cout<<"Max Friend: "<<(maxFriends(n , s, e));
    return 0;
}