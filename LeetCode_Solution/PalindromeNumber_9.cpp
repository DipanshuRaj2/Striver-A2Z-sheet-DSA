// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
// public:
//     bool isPalindrome(int x) {
//         bool flag = false;
//         string s= to_string(x);
//         string t = s;
//         reverse(s.begin(),s.end()); 
//         cout<<s <<" "<<t;
//         if(s == t)
//             flag = true;
//         else{
//             flag = false;
//         }
//         return flag;
//     }
// };
// int main()
// {
//     Solution sol;
//     int n = 10;
//     cout<<(sol.isPalindrome(n)?"Palindrome": "not a palindrome");
//    return 0;
// }
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        bool flag;
        if(x<0){
            flag= false;
        }
        int ans = 0;
        int temp = x;
        while(temp!=0){
            int last_digit = temp % 10;
            ans = ans * 10 +last_digit;
            temp= temp/10;
        }
       
        if(ans == x){
            flag = true;
        }
        else{
            flag = false;
        }
        return flag;
    }
};
int main()
{
    Solution sol;
    int n = 121;
    cout<<(sol.isPalindrome(n)?"Palindrome": "not a palindrome");
   return 0;
}