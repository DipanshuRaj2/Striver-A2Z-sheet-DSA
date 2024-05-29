#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    string longestCommonPrefix(vector<string> & strs){
        int n = strs.size();
        sort(strs.begin() , strs.end());

        string ans = "";
        string first = strs[0];
        string last = strs[n-1];

        int i = 0 ;
        while(i < first.length()){
            if(first[i] == last[i]){
                ans.push_back(first[i]);
                i++;
            }
            else{
                break;
            }
        }
        return ans;
        
    }
};
int main()
{
    Solution sol;
    vector<string>strs = {"flower","flow","flight"};
    cout<<sol.longestCommonPrefix(strs);
   return 0;
}