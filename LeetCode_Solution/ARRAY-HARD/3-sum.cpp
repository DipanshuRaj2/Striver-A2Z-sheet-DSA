#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<vector<int>>threeSum (vector<int> &nums){
        set<vector<int>>st;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            for(int j = i+1; j<n; j++){
                for(int k = j+1; k<n; k++){
                    if(nums[i]+nums[j]+nums[k] == 0){
                        vector<int>temp{nums[i], nums[j],nums[k]};
                        sort(temp.begin(), temp.end());
                        st.insert(temp);
                    }
                }
            }
        }
        vector<vector<int>>ans(st.begin(), st.end());
        return ans;
    }
};
int main()
{
    Solution sol;
    vector<int>arr = {-1,0,1,2,-1,-4};
    vector<vector<int>>ans = sol.threeSum(arr);

    for(auto it: ans){
        cout<<"[";
        for(auto i : it){
            cout<< i <<" ";
        }
        cout<<"]";
    }
   return 0;
}