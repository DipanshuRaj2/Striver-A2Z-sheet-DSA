#include <bits/stdc++.h>
using namespace std;
string nonRepeatString(string &str){
    string ans = "";
    set<char>st;
    for(char ch: str){
        if(st.find(ch) == st.end()){
            st.insert(ch);
            ans = ans + ch;
        }
    }
    return ans;
}
int main()
{
    string str;
    getline(cin, str);
    cout<<nonRepeatString(str);
    return 0;
}