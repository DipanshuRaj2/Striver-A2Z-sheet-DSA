/*Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
 

Example 1:

Input: s = "()"
Output: true
Example 2:

Input: s = "()[]{}"
Output: true
Example 3:

Input: s = "(]"
Output: false
*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool isValid(string s){
        stack<char>c;
        for(auto ele :s){
            if(c.empty()){
                c.push(ele);
            }
            else if ((c.top()=='('&& ele==')' )||
                     (c.top()=='{'&& ele=='}' )||
                     (c.top()=='['&& ele==']'))  {
                 c.pop();
                     }
                else{
                    c.push(ele);
                }
        }
        if(c.size()==0){
            return true;
        }
        return false;
        
    }
};
int main()
{
    Solution sol;
    string s = "()[]{}";
    cout<<(sol.isValid(s));
   return 0;
}