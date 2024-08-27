#include <bits/stdc++.h>
using namespace std;
bool checkPalindrome(string &s, int i, int j)
{
    if (i >= j)
        return true;
    if (s[i] == s[j])
    {
        return checkPalindrome(s, i + 1, j - 1);
    }
    return false;
}
string LongestPalindrome(string &str)
{
    int n = str.size();
    int maxLength = 0;
    int sp = 0;
    for(int i = 0; i<n; i++){
        for(int j = i; j<n; j++){
            if(checkPalindrome(str, i, j)== true){
                if(j - i + 1 > maxLength){
                    maxLength = j - i + 1;
                    sp = i;
                }
            }
        }   
    }
    return str.substr(sp, maxLength);
}
int main()
{
    string str = "blockcol" ;
    cout<<LongestPalindrome(str);
    return 0;
}