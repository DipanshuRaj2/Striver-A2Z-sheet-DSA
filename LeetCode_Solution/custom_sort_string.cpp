/*

Code
791. Custom Sort String
Medium
Topics
Companies
You are given two strings order and s. All the characters of order are unique and were sorted in some custom order previously.

Permute the characters of s so that they match the order that order was sorted. More specifically, if a character x occurs before a character y in order, then x should occur before y in the permuted string.

Return any permutation of s that satisfies this property.

 

Example 1:

Input:  order = "cba", s = "abcd" 

Output:  "cbad" 

Explanation: "a", "b", "c" appear in order, so the order of "a", "b", "c" should be "c", "b", and "a".

Since "d" does not appear in order, it can be at any position in the returned string. "dcba", "cdba", "cbda" are also valid outputs.

Example 2:

Input:  order = "bcafg", s = "abcd" 

Output:  "bcad" 
*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        string customSortString(string order, string s){
            vector<char>orderedChars;

            for(char c: order){
                for(char ch : s){
                    if(c == ch){
                        orderedChars.push_back(c);
                    }
                }
            }
            for(char ch :s){
                bool found = false;
                for(char c : order){
                    if(c == ch){
                        found = true;
                        break;
                    }
                }
                if(!found) {
                    orderedChars.push_back(ch);
                }
            }
            return string(orderedChars.begin(), orderedChars.end());
        }
};
int main()
{
    Solution sol;
    string order = "bcafg";
    string s = "abcd"; 
    cout<<sol.customSortString(order, s);
 
   return 0;
}