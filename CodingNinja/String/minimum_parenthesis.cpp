#include<bits/stdc++.h>
using namespace std;
int minimumParentheses(string s){
    int count = 0;
    int open = 0;
    for(int i = 0; i<s.length(); i++){
        if(s[i]=='('){
            open++;
        }
        else{
            open--;
        }
        if(open < 0){
            count += abs(open);
            open = 0;
        }
    }
    count += abs(open);
    return count;
}
 int main()
{
    string s = "())";
    cout<<minimumParentheses(s);
   return 0;
}