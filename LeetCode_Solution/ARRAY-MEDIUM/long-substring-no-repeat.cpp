#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int lengthOfLongestSubstring(string s){
            //using two pointer approach
            unordered_set<char>st;
            int start = 0;
            int end = 0;
            int maxi = 0;
            while(start < s.size()){
                auto it = st.find(s[start]);
                
                if(it == st.end()){
                    if(start-end+1 > maxi){
                        maxi = start - end + 1;
                    }
                    st.insert(s[start]);
                    start++;
                }
                else if(it != st.end()){
                    st.erase(s[end]);
                    end++;
                }
            }
            return maxi;
        }
};
int main()
{
    Solution sol;
    string s = "abcabccbb";
    cout<<sol.lengthOfLongestSubstring(s);
    
   return 0;
}