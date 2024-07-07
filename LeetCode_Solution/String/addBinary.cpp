#include<bits/stdc++.h>
using namespace std;
string addBinary(string a, string b){
    int alen = a.size();
    int blen = b.size();

    int i = 0;
    string ans = "";
    int carry = 0;
    while(i<alen ||  i< blen || carry != 0){
        int x = 0;
        if(i<alen && a[alen-i-1] == '1'){
            x = 1;
        }
        int y = 0;
        if(i<blen and b[blen-i-1]=='1'){
            y = 1;
        }
        int sum = x + y + carry;
        ans = to_string(sum % 2)  + ans;
        carry = sum/2;

        i++;
    }

    return ans;

}
int main(){
    string a= "1010";
    string b = "1011";

    cout<<addBinary(a, b);

 return 0;
}