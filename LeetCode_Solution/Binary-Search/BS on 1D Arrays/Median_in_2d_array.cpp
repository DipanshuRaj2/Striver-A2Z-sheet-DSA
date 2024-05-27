#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int median(vector<vector<int>>mat, int R, int C){
        vector<int>ans;
        for(int i = 0; i<R; i++){
            for(int j = 0; j<C; j++){
                ans.push_back(mat[i][j]);
            }
        }
        sort(ans.begin(), ans.end());
        int n = ans.size();

        int ele = ans[n/2];
        return ele;
    }
};
int main()
{
    Solution sol;
    int R = 3;
    int C = 3;
    vector<vector<int>>mat = {{1, 3, 5}, 
                              {2, 6, 9}, 
                              {3, 6, 9}};
    cout<<sol.median(mat, R, C);
   return 0;
}