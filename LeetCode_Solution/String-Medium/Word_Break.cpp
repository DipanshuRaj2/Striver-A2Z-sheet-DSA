#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n = s.size();
        vector<string>str;
        for(int i = 0; i<n; i++){
            for(int j = i; j<n; j++){
                string ans = s.substr(i, j - i + 1);
                str.push_back(ans);
            }
        }
        for(auto ele : str){
            cout<<ele<<" ";
        }
        cout<<endl;
        bool check = true;
        for(int i = 0; i<wordDict.size(); i++){
            for(int j = 0; j<str.size(); j++){
                if(str[i] == str[j]){
                    check = true;
                    break;
                }
                if(str[i] != str[j]){
                    check = false;
                }
            }
        }
        return check;
    }
};
int main()
{
    Solution  sol;
    string s = "catsandog";
    vector<string>wordDict = {"cats","dog","sand","and","cat"};
    cout<<sol.wordBreak(s, wordDict);
    return 0;
}