#include <bits/stdc++.h>
using namespace std;
vector<int>GCDANDLCM(int a, int b){
    int n = min(a, b);
    int GCD = 1;
    for(int i = 1; i<=n; i++){
        if((a % i == 0) && (b % i == 0)){
            GCD = i;
        }
    }
    int LCM = (a * b)/GCD;
    return {LCM, GCD};
}
int main()
{
    int a = 5, b = 10;
    vector<int>ans = GCDANDLCM(a, b);
    cout<<"LCM: "<<ans[0]<<", HCF: "<<ans[1];
    return 0;
}