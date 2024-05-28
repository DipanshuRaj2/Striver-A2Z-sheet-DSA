/*A valid parentheses string is either empty "", "(" + A + ")", or A + B, where A and B are valid parentheses strings, and + represents string concatenation.

For example, "", "()", "(())()", and "(()(()))" are all valid parentheses strings.
A valid parentheses string s is primitive if it is nonempty, and there does not exist a way to split it into s = A + B, with A and B nonempty valid parentheses strings.

Given a valid parentheses string s, consider its primitive decomposition: s = P1 + P2 + ... + Pk, where Pi are primitive valid parentheses strings.

Return s after removing the outermost parentheses of every primitive string in the primitive decomposition of s.

 

Example 1:

Input: s = "(()())(())"
Output: "()()()"
Explanation: 
The input string is "(()())(())", with primitive decomposition "(()())" + "(())".
After removing outer parentheses of each part, this is "()()" + "()" = "()()()".
Example 2:

Input: s = "(()())(())(()(()))"
Output: "()()()()(())"
Explanation: 
The input string is "(()())(())(()(()))", with primitive decomposition "(()())" + "(())" + "(()(()))".
After removing outer parentheses of each part, this is "()()" + "()" + "()(())" = "()()()()(())".
Example 3:

Input: s = "()()"
Output: ""
Explanation: 
The input string is "()()", with primitive decomposition "()" + "()".
After removing outer parentheses of each part, this is "" + "" = "".*/
// #include<bits/stdc++.h>
// using namespace std;
// class Solution{
//     public:
//     string removeOuterParentheses(string s) {
//         stack<char>st;
//         string ans = "";
//         for(int i = 0; i<s.length()-1; i++){
//             if(st.empty()){
//                 st.push(s[i]);
//             }
//             else if(s[i] == '('){
//                 st.push(s[i]);
//                 ans.push_back(s[i]);
//             }
//             else if(st.top() == '(' && s[i] == ')'){
//                 st.pop();
//                 if(!st.empty()) ans.push_back(s[i]);
                
//             }
//         }

//         return ans;
//     }
// };
// int main()
// {
//     Solution sol;
//     string s = "(()())(())";
//     cout<< sol.removeOuterParentheses(s);
//    return 0;
// }

// it takes time complexity O(n)

#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    string removeOuterParentheses(string s){
    string ans = "";
    int count = 0;
    for(int i = 0; i<n; i++){
        if(s[i] == ')') count --;
        if(count != 0) ans.push_back(s[i]);
        if(s[i] == '(') count++;
    }
    return ans;
  }
};

int main()
{
   return 0;
}