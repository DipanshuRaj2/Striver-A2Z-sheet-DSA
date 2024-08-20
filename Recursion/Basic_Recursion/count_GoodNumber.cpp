#include<bits/stdc++.h>
using namespace std;
int countGoodNumber(long n){
    int ans = 1;
    int modu = 1e9 + 7;
    for(int i = 0; i<n; i++){
        if(i%2 == 0){
            ans = (ans * 5) % modu;
        }
        else{
            ans = (ans * 4) % modu;
        }
    } 
    return ans;
}
int main(){
    int modu = 1e9 + 7;
    cout<< modu<<endl;
    int power = pow(10, 9)+8;
    cout<<power;
    // cout<<countGoodNumber(50);
 return 0;
 }