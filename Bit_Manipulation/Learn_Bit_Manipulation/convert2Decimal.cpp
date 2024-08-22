#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int binary_to_decimal(string str) {
        // Code here.
        int res = 0;
        int i = 0;
        reverse(str.begin(), str.end());
        while(i < str.size()){
            int ans = pow(2 , i);
            if(str[i]=='1'){
                res += ans;
            }
            i++;
        }
        return res;
    }
};
int main(){
    Solution sol;
    string str = "1001010";
    cout<< sol.binary_to_decimal(str);
 return 0;
 }