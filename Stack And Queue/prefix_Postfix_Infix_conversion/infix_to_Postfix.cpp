#include <bits/stdc++.h>
using namespace std;
int priority(char &ch){
    if(ch == '^'){
        return 3;
    }
    else if(ch == '/' || ch == '*'){
        return 2;
    }
    else if(ch == '-' || ch == '+'){
        return 1;
    }
    return -1;
}
string infixToPostfix(string str){
    int i = 0; 
    stack<char>st;
    string ans = "";
    while(i < str.size()){
        if((str[i] >= 'A' && str[i] <= 'Z')||
          (str[i] >= 'a' && str[i] <= 'z')||
          (str[i] >= '1' && str[i] <= '9')){
            ans += str[i];
          }
        else if(str[i] == '('){
            st.push(str[i]);
        }
        else if(str[i] == ')'){
            while(!st.empty() && st.top() != '('){
                ans += st.top();
                st.pop();
            }
            st.pop();
        }
        else{ // operator comes * / ^ + -
            while(!st.empty() && priority(str[i]) <= priority(st.top())){
                ans += st.top();
                st.pop();
            }
            st.push(str[i]);
        }
        i++;
    }
    while(!st.empty()){
        ans += st.top();
        st.pop();
    }
    return ans;
}
int main()
{
    string str = "a^b*c-(a*b)";
    cout<<infixToPostfix(str);
    return 0;
}