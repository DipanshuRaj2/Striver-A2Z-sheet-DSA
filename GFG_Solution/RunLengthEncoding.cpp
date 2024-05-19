#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    string encode(string s) {
        // code here
        string ans="";
        int count = 1;
       for(int i = 0; i<s.length(); i++){
        if(i < s.length()-1 && s[i] == s[i+1]){
            count++;
        }
        else{
            // ans.push_back(s[i]);
            ans += s[i];
            ans += to_string(count);
            // char ch = to_string(count);
            // ans.push_back(to_string(ch));
            
            count = 1;
        }
       }
        return ans;
    }
};
int main()
{
    Solution sol;
    string ans = "aaaabbbccc";
    cout<<sol.encode(ans);
   return 0;
}

