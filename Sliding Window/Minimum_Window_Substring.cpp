#include<bits/stdc++.h>
using namespace std;
class Solution{
    public: 
    string minWindow(string &s, string &t){
        int mini = INT_MAX; int startI = -1;
        for(int i = 0; i<s.size(); i++){
            vector<int>hash(256, 0); int cnt = 0; 
            for(int j = 0; j <t.size(); j++) hash[t[j]]++;
            for(int j = i; j <s.size(); j++){
                if(hash[s[j]] > 0){
                    cnt++;
                }
                hash[s[j]]--;
                if(cnt == t.size()){
                    int len = j - i + 1;
                    if(len < mini){
                        mini = len;
                        startI = i;
                        break;
                    }
                }
            }
        }
        if(startI == -1){
            return "";
        }else{
            return s.substr(startI , mini);
        }
   }
};

int main(){
   string s =  "ADOBECODEBANC";
   string t =   "ABC";
   Solution* sol = new Solution();
   cout<<sol->minWindow(s, t);
   return 0;
}