// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
//   public:
//     string encode(string s) {
//         // code here
//         string ans="";
//         int count = 1;
//        for(int i = 0; i<s.length(); i++){
//         if(i < s.length()-1 && s[i] == s[i+1]){
//             count++;
//         }
//         else{
//             // ans.push_back(s[i]);
//             ans += s[i];
//             ans += to_string(count);
//             // char ch = to_string(count);
//             // ans.push_back(to_string(ch));
            
//             count = 1;
//         }
//        }
//         return ans;
//     }
// };
// int main()
// {
//     Solution sol;
//     string ans = "aaaabbbccc";
//     cout<<sol.encode(ans);
//    return 0;
// }

// remove vowel

#include <bits/stdc++.h> 
using namespace std;
string removeVowels(string s) {
    // Write your code here.
    string ans="";
    for(int i = 0; i<s.length(); i++){
        if((s[i]=='a' || s[i]== 'A') || 
           (s[i]=='e' || s[i] =='E') ||
           (s[i]=='i' || s[i] =='I') ||
           (s[i]=='o' || s[i] =='O') ||
           (s[i]=='u' || s[i] =='U') ){
               continue;
           }
           else{
               ans.push_back(s[i]);
           }
    }
    return ans;
}
int main(){
    string str = "EEld";
    cout<<removeVowels(str);
}