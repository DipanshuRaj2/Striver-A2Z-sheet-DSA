/*You are given two strings of the same length s and t. In one step you can choose any character of t and replace it with another character.

Return the minimum number of steps to make t an anagram of s.

An Anagram of a string is a string that contains the same characters with a different (or the same) ordering.

 

Example 1:

Input: s = "bab", t = "aba"
Output: 1
Explanation: Replace the first 'a' in t with b, t = "bba" which is anagram of s.
Example 2:

Input: s = "leetcode", t = "practice"
Output: 5
Explanation: Replace 'p', 'r', 'a', 'i' and 'c' from t with proper characters to make t anagram of s.
Example 3:

Input: s = "anagram", t = "mangaar"
Output: 0
Explanation: "anagram" and "mangaar" are anagrams. */

// this method using 2 array;
// #include<bits/stdc++.h>
// using namespace std;
// class Solution{
//    public:
//    int minSteps(string s, string t){
//       int n = s.length();
//       int mp_s[26] = {0};  // it store the every element 0;
//       int mp_t[26] = {0};
      
//       for(int i = 0; i<n; i++){
//          mp_s[s[i] - 'a']++;  // it store the frequency of every character
//          mp_t[t[i] - 'a']++;
//       }
//       int result = 0;
//       for(int i = 0; i<26; i++){
//          if(mp_s[i] > mp_t[i]) {
//             int countAns = mp_s[i] - mp_t[i];   // if char of string s is greater than char of string t then subtract karni hain)
//             result += countAns;
//          }
//       }
//       return result;
//    }
// };
// int main()
// {
//    Solution sol;
//    string s = "practice";
//    string t = "leetcode";
//    cout<<sol.minSteps(s, t);
//    return 0;
// }


#include<bits/stdc++.h>
using namespace std;
class Solution{
   public:
   int minSteps(string s, string t){
      unordered_map<char, int>mps;
      unordered_map<char, int>mpt;
      for(auto ch : s){
         mps[ch]++;
      }
      for(auto ch : t){
         mpt[ch]++;
      }
      int result = 0; 
      for(char ch = 'a'; ch <= 'z'; ch++){
         if(mps[ch] > mpt[ch]){
            result += mps[ch] - mpt[ch];
         }
      }
      return result;
   }
};
int main()
{
      Solution sol;
   string s = "practice";
   string t = "leetcode";
   cout<<sol.minSteps(s, t);
   return 0;
}

