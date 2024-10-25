#include<bits/stdc++.h>
using namespace std;
class Solution{
    public: 
    //brute force
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
   //optimal approach minimum sliding window
    string minWindow1(string &s, string &t){
        int l = 0; int r = 0;
        
        int mini = INT_MAX; int cnt = 0;

        vector<int>hash(256, 0); int sIndex = -1;

        for(int i = 0; i<t.size();i++){
            hash[t[i]]++;
        }

        while(r < s.size()){
            if(hash[s[r]] > 0){
                cnt++;
            }
            hash[s[r]]--;
            while(cnt == t.size()){
                int len = r - l + 1;
                if(len  < mini){
                    mini = len;
                    sIndex = l;
                }
                hash[s[l]]++;
                if(hash[s[l]] > 0) {
                    cnt = cnt - 1;
                }
                l++;
            }
            r++;
        }
        return (sIndex == -1) ? "": s.substr(sIndex, mini);
    }
};

int main(){
   string s =  "ADOBECODEBANC";
   string t =   "ABC";
   Solution* sol = new Solution();
   cout<<sol->minWindow1(s, t);
   return 0;
}