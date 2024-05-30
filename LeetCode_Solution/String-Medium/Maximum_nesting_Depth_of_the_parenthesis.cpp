/*1614. Maximum Nesting Depth of the Parentheses
Solved
Easy
Topics
Companies
Hint
Given a valid parentheses string s, return the nesting depth of s. The nesting depth is the maximum number of nested parentheses.

 

Example 1:

Input: s = "(1+(2*3)+((8)/4))+1"

Output: 3

Explanation:

Digit 8 is inside of 3 nested parentheses in the string.

Example 2:

Input: s = "(1)+((2))+(((3)))"

Output: 3

Explanation:

Digit 3 is inside of 3 nested parentheses in the string.

Example 3:

Input: s = "()(())((()()))"

Output: 3

 */
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxDepth(string s) {
        int n = s.length();

        int count = 0; int maxi = 0;
        for(int i = 0; i<n; i++){
            if(s[i] == '('){
                count ++;
            }
            else if(s[i]==')'){
                count --;
            }
            maxi = max(count, maxi);
        }
        return maxi;
    }
};
int main()
{
    Solution sol;
    string s = "(1+(2*3)+((8)/4))+1";
    cout<<sol.maxDepth(s)
   return 0;
}