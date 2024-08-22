#include<bits/stdc++.h>
using namespace std;
void toBinary(int n)
{
    string ans = "";
        while(n != 0){
            int last = n %2;
            ans += to_string(last);
            n /= 2;
        }
        reverse(ans.begin(), ans.end());
        cout<<ans;
}
int main(){
    toBinary(12534);
 return 0;
 }