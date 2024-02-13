/*1047. Remove All Adjacent Duplicates In String
Easy
Topics
Companies
Hint
You are given a string s consisting of lowercase English letters. A duplicate removal consists of choosing two adjacent and equal letters and removing them.

We repeatedly make duplicate removals on s until we no longer can.

Return the final string after all such duplicate removals have been made. It can be proven that the answer is unique.

 

Example 1:

Input: s = "abbaca"
Output: "ca"
Explanation: 
For example, in "abbaca" we could remove "bb" since the letters are adjacent and equal, and this is the only possible move.  The result of this move is that the string is "aaca", of which only "aa" is possible, so the final string is "ca".
Example 2:

Input: s = "azxxzy"
Output: "ay"

*/

//                                         using stack
// #include<bits/stdc++.h>
// using namespace std;
// class Solution{
//     public:
//         string removeDuplicates(string s){
//             stack<char>st;

//             for(auto ele :s){
//                 if(st.empty()||ele !=st.top())
//                 st.push(ele);
            
//             else{
//                 st.pop();
//             }
//         }
//         string ans="";
//         while(!st.empty()){
//             char ch = st.top();
//             st.pop();

//             ans = ans +ch;
//         }
//         reverse(ans.begin(), ans.end());
//         return ans;
//    }
// };
// int main()
// {
//     Solution sol;
//     string s = "azxxzy";
//     cout<<(sol.removeDuplicates(s));
//    return 0;
// }

#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    string removeDuplicates(string s){
        string temp="";
        for(auto ele : s){
            if(temp.empty()||ele != temp.back()){
                temp.push_back(ele);
            }
            else{
                temp.pop_back();
            }
        }
        return temp;
    }
};
int main()
{
    Solution sol;
    string s = "azxxzy";
    cout<<(sol.removeDuplicates(s));
   return 0;
}