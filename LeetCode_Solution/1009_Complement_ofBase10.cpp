// #include<bits/stdc++.h>
// using namespace std;
// class Solution{
//    public:
//    int bitwiseComplement(int n){
//       vector<int>v;
//       while(n != 0){
//          int ans = n & 1;
//          v.push_back(ans);
//          n = n/2;
//       }
//       reverse(v.begin(), v.end());
//       for(int i = 0; i<v.size(); i++){
//          if(v[i]== 1){
//             v[i] = 0;
//          }
//          else{
//             v[i] = 1;
//          }
//       }
//       string s= "";
//       for(int i = 0; i<v.size(); i++){
//          s += to_string(v[i]);
//       }
//       int x = stoi(s);
//       int i = 0;
//       int ans = 0;
//       while(x != 0){
//          int digit = n % 10;
//          x = x/10;
//          ans = ans + digit*pow(2,i); 
//          i++;
//       }
//       return ans;
//    }
// };
// int main()
// {
//    Solution s;
//    int n=5;
//    cout<<(s.bitwiseComplement(n));
//    return 0;
// }

/*
1009. Complement of Base 10 Integer
Solved
Easy
Topics
Companies
Hint
The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.

For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.
Given an integer n, return its complement.

 

Example 1:

Input: n = 5
Output: 2
Explanation: 5 is "101" in binary, with complement "010" in binary, which is 2 in base-10.
Example 2:

Input: n = 7
Output: 0
Explanation: 7 is "111" in binary, with complement "000" in binary, which is 0 in base-10.
Example 3:

Input: n = 10
Output: 5
Explanation: 10 is "1010" in binary, with complement "0101" in binary, which is 5 in base-10.
*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0){
            return 1;
        }
        for(int i = 1; i<=n; i=i*2){
            n = n^i;
        }
        return n;
    }
};
int main()
{
   Solution s;
   cout<<(s.bitwiseComplement(n));
   return 0;
}