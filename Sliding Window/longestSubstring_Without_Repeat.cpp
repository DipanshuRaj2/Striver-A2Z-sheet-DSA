// brute force; // generate all substring and check the length
/*
#include<bits/stdc++.h>
using namespace std;
int longestSubstring(string &s){
    int n = s.size();
    int maxi = 0;
    for(int i = 0; i<n; i++){
        vector<int>arr(256, 0);
        for(int j = i; j<n; j++){
            if(arr[s[j]] == 1) break;
            int len = j-i+1;
            maxi = max(len , maxi);
            arr[s[j]] = 1;
        }
    }
    return maxi;
}
int main(){
    string str = "abcabcbb";
    cout<<longestSubstring(str);
    
    return 0;
}
*/

//optimal approach 
// see that video of code with alisha
#include<bits/stdc++.h>
using namespace std;
int countLongestSubstring(string s){
    int n = s.length();
    int maxi = 0;
    set<char>st;
    int start = 0;
    int end = 0;
    while(end < n){
        auto it = st.find(s[end]);
        if(it == st.end()){
            int len = end - start + 1;
            maxi = max(maxi, len);
             st.insert(s[end]);
            end++;
        }
        else{
            st.erase(s[start]);
            start++;
        }
    }
    return maxi;
}
int main(){
    string s = "abcabcbb";
    cout<<countLongestSubstring(s);
    return 0;
}
