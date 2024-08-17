#include <bits/stdc++.h>
using namespace std;
int DigitSum(int n){
    if(n >= 0 && n <= 9){
        return n;
    }
    return (n%10) + DigitSum(n/10);
}
int main()
{
    int n = 134098;
    cout<<DigitSum(n);
    return 0;
}