/*
Code


1
"Let's take LeetCode contest"
"Mr Ding"
557. Reverse Words in a String III
Solved
Easy
Topics
Companies
Given a string s, reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.

 

Example 1:

Input: s = "Let's take LeetCode contest"
Output: "s'teL ekat edoCteeL tsetnoc"
Example 2:

Input: s = "Mr Ding"
Output: "rM gniD"*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    string reverseWords(string s){
        stringstream ss(s);
        string words = "";
        string ans = "";

        while(ss >> words){
            reverse(words.begin(), words.end());
            ans = ans + words +" ";
        }
        int n = ans.length();
        return ans.substr(0, n-1);
    }
};
int main()
{
    Solution sol;
    string s = "Let's take Leetcode Contest";
    cout<<sol.reverseWords(s);.
    
   return 0;
}