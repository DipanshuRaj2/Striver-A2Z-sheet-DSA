#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:

    static bool comparator(pair<int, int>a, pair<int, int>b){
        if(a.second == b.second){
            return a.first > b.first;
        }
        return a.second < b.second;
    }

    vector<int>frequencySort(vector<int>&nums){
        unordered_map<int, int>mpp;
        for(int i = 0; i<nums.size(); i++){
            mpp[nums[i]]++;
        }

        vector<pair<int, int>>v(mpp.begin(), mpp.end());
        sort(v.begin(), v.end(), comparator);

        vector<int>ans;
        int cnt = 0;

        for(auto ele: v){
            int cnt = ele.second;
            while(cnt--){
                ans.push_back(ele.first);
            }
        }
        return ans;
    }
};
int main()
{
    Solution sol;
    vector<int>nums={1,5,0,5};//{1,1,2,2,2,3};
    vector<int>ans = sol.frequencySort(nums);

    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i] <<" ";
    }
   return 0;
}