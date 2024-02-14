
/*You are given a string s and an integer k, a k duplicate removal consists of choosing k adjacent and equal letters from s and removing them, causing the left and the right side of the deleted substring to concatenate together.

We repeatedly make k duplicate removals on s until we no longer can.

Return the final string after all such duplicate removals have been made. It is guaranteed that the answer is unique.

 

Example 1:

Input: s = "abcd", k = 2
Output: "abcd"
Explanation: There's nothing to delete.
Example 2:

Input: s = "deeedbbcccbdaa", k = 3
Output: "aa"
Explanation: 
First delete "eee" and "ccc", get "ddbbbdaa"
Then delete "bbb", get "dddaa"
Finally delete "ddd", get "aa"
Example 3:

Input: s = "pbbcggttciiippooaais", k = 2
Output: "ps"
*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
   public:
   string removeDuplicates(string s , int k){
   vector<pair<char, int>>st;

   for(auto c : s){
      if(st.size()==0 ||st.back().first!=c){
         st.push_back({c,1});
      }
      else{
         st.back().second++;
      }
      if(st.back().second == k){
         st.pop_back();
      }
   }
   string res;
   for(auto x : st){
      res.append(x.second,x.first);
   }
   return res;
 }
};
int main()
{
   Solution sol;
   string s = "deeedbbcccbdaa";
   int k = 3;

   cout<<sol.removeDuplicates(s , k);
   return 0;
}



