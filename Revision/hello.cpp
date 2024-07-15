#include <bits/stdc++.h>
using namespace std;
vector<long long>lcmAndGcd(long long &a, long long &b){
    vector<long long>factA;
    vector<long long>factB;
    long long i = 1;
    while(i <= a || i<= b){
       if(a % i == 0) factA.push_back(i);
       if(b % i == 0)factB.push_back(i);
        i++;
    }
    vector<long long>Gcd;
    for(int i = 0;i<factA.size(); i++){
        for(int j = 0; j<factB.size(); j++){
            if(factA[i] == factB[j]){
                Gcd.push_back(factA[i]);
                break;
            }
        }
    }
    int GcdANS = 1;
    for(int i = 0; i<Gcd.size(); i++){
        GcdANS = GcdANS * Gcd[i];
    }
    vector<long long>ans;
    int LCM = (a * b)/GcdANS;

    ans.push_back(LCM);
    ans.push_back(GcdANS);
    return ans;
}
int main()
{
    long long a = 14;
    long long b = 8;
    vector<long long>ans = lcmAndGcd(a, b);
    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i] <<" ";
    }
    // cout<<"Lcm: "<<ans[0]<<"Gcd: "<<ans[1]<<" ";
    return 0;
}