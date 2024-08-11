#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(int i, int n, string str){
    if(i >= n) return true;
    if(str[i] != str[n-1]){
        return false;
    }
    return isPalindrome(i+1, n-1, str);
}
int main() 
{
    string str = "mada";
    int n = str.size();
    cout<<isPalindrome(0, n, str);
    return 0;
}