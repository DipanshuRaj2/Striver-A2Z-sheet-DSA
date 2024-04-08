#include<bits/stdc++.h>
using namespace std;
class Solution {
public:

    static bool comparator(pair<string, int>a, pair<string, int>b){
        return a.second > b.second;
    }
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<string, int>>v;
        for(int i = 0; i<names.size(); i++){
            v.push_back({names[i], heights[i]});
        }
        sort(v.begin(),v.end(), comparator);
        vector<string>ans;

        for(auto ele: v){
            ans.push_back(ele.first);
        }
        return ans;
    }
};
int main()
{
    Solution sol;
    vector<string>names = {"Mary","John","Emma"};
    vector<int>heights = {180,165,170};

    vector<string>ans = sol.sortPeople(names, heights);
    for(auto ele: ans){
        cout<<ele<<" ";
    }
   return 0;
}