/*A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

 

Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
Example 2:

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
Example 3:

Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.
 */
#include<bits/stdc++.h>
using namespace std;
bool palindrome(string s){
    transform(s.begin(), s.end(), s.begin(),::tolower);
    string ans;
    for(int i = 0; i<s.length(); i++){
        if(isalnum(s[i])){
            ans = ans+s[i];
        }
    }
    string finalAns = ans;
    reverse(ans.begin(),s.end());
    return (finalAns ==ans);
}
int main()
{
    string s ="A man, a plan, a canal: Panama";
    cout<<(palindrome(s)?"palindrome ":"Not a palindrome");
   return 0;
}