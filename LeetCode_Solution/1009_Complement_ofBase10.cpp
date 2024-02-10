#include<bits/stdc++.h>
using namespace std;
class Solution{
   public:
   int bitwiseComplement(int n){
      vector<int>v;
      while(n != 0){
         int ans = n & 1;
         v.push_back(ans);
         n = n/2;
      }
      reverse(v.begin(), v.end());
      for(int i = 0; i<v.size(); i++){
         if(v[i]== 1){
            v[i] = 0;
         }
         else{
            v[i] = 1;
         }
      }
      string s= "";
      for(int i = 0; i<v.size(); i++){
         s += to_string(v[i]);
      }
      int x = stoi(s);
      int i = 0;
      int ans = 0;
      while(x != 0){
         int digit = n % 10;
         x = x/10;
         ans = ans + digit*pow(2,i); 
         i++;
      }
      return ans;
   }
};
int main()
{
   Solution s;
   int n=5;
   cout<<(s.bitwiseComplement(n));
   return 0;
}