#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
  /*
    string convertToBinary(int num){
        string bin = "";
        while(num != 0){
            int ele = num % 2;
            bin.push_back(ele + '0');
            num /= 2;
        }
        reverse(bin.begin(), bin.end());
        return bin;
    }
    int convertToDecimal(string &str){
        reverse(str.begin(), str.end());
        int ans = 0;
        for(int i = 0;i<str.size(); i++){
            int power = pow(2, i);
            if(str[i] == '1'){
                ans += power;
            }
        }
        reverse(str.begin(), str.end());
        return ans;
    }
    void bitManipulation(int num, int i) {
        //get ith bit
        string str = convertToBinary(num);
        int n = str.size();
        if(i > n){
            str = string(i - n, '0') + str;
            n = str.size();
        }

      //1
        cout<<str<<"    "<<"get ith bit: "<<str[n - i]<<endl;

      //2
        str[n - i] = '1';
        int ans = convertToDecimal(str);
        cout<<str<<"    "<<"set ith bit: "<<ans<<endl;

        str[n-i] = '0';
        int ans1 = convertToDecimal(str);
        cout<<str<<"    "<<"clear the ith bit: "<<ans1<<endl;
    }
    */
   void bitManipulation(int num, int k){
    //set the ith bit
    int ans = num | 1 << k;
    cout<<ans<<endl; 

    //clear the ith bit
    int ans1 = num & ~(1 << k-1);
    cout<<ans1;

    //
   }
};
int main(){
    Solution sol;
    sol.bitManipulation(8, 1);
}