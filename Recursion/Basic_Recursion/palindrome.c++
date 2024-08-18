// #include <bits/stdc++.h>
// using namespace std;
// bool isPalindrome(string str, int i, int n){
//     if(i == n-1){
//         return true;
//     }
//     if(str[i] != str[n-i-1]){
//         return false;
//     }
//     return isPalindrome(str, i+1, n);
// }
// int main()
// {
//     int n = 121;
//     string str = to_string(n);
//     bool flag = isPalindrome(str, 0, str.size());
//     cout<<flag;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
// bool isPalindrome(int n){
//     if(n >= 0 && n <= 9){
//         return n;
//     }
//     int i = n;
//     isPalindrome(n/10);
// }
    string strremove(string&str , int i , char target)
    {
        if(i==str.size()) return str;
        if(str[i]==target)
        {
            str.erase(remove(str.begin(),str.end(),target));
            i = i+1;
        }
        strremove(str , i+1 , target);
    }

int main()
{
    // int n = 121;
    // isPalindrome(n);
    string str = "abacx";
    char target = 'a';
    strremove(str , 0 ,target);
    cout<<str;
    return 0;
}