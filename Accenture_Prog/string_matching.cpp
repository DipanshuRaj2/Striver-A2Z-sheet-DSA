#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> stringMatching(string a, string b)
{
    vector<pair<int, int>>ans;
    int n = a.size();
    int m = b.size();
    int j = 0;
    for(int i = 0; i<n; i++){
        int start = i;
        for(j = 0; j < m; j++){
            if(a[i] == b[j]){
                i++;
            }
            else{
                break;
            }
        }
        if(j == m)
        ans.push_back(make_pair(i-j, i-1));    
    }
    return ans;
}
int main()
{
    string a = "Pen,pencil,Penguin";
    string b = "Pen";
    vector<pair<int, int>> ans = stringMatching(a, b);
    for (auto ele : ans)
    {
        cout << ele.first+1 << " " << ele.second+1<<" "<<endl;
    }
    return 0;
}