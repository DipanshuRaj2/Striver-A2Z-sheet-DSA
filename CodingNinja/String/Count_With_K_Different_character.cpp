#include<bits/stdc++.h>
using namespace std;
int countSubStrings(string str, int k){
    int n = str.length();
    int count = 0;

    for(int i = 0; i<n; i++){
        unordered_set<char>st;
        for(int j = i; j<n; j++){
            st.insert(str[j]);
        
        if(st.size() == k){
            count++;
        }
        else if(st.size() > k){
            break;
        }
    }
    }
    return count;
}
int main()
{
   return 0;
}