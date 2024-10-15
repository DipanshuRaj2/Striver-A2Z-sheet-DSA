#include<bits/stdc++.h>
using namespace std; 
class Solution {
public:
    //brute  force
    int numberOfSubstrings(string s) {
        int count = 0;
        for(int i = 0; i<s.size(); i++){
            unordered_set<char>st;
            for(int j = i; j<s.size(); j++){
                st.insert(s[j]);
                if(st.size() >=  3) count++;
            }
        }
        return count;
    }
    //optimal solution
    int numberOfSubstrings1(string s) {
        int l = 0; int r = 0;
        int count = 0;
        unordered_map<char, int>ump;
        while(r < s.length()){
            ump[s[r]]++;
            while(ump.size() == 3){
                count += s.length() - r;
                ump[s[l]]--;
                if(ump[s[l]] == 0) 
                   ump.erase(s[l]);

              l++;
            }
            r++;
        }
        return count;
    }
};
int main(){
    Solution* sol = new Solution();
    string s = "abcabc";
    cout<<sol->numberOfSubstrings1(s);
}
