#include <bits/stdc++.h>
using namespace std;
double power(double i, int n){
    if(n == 0){
        return 1.0;
    }
    return i * power(i, n-1);
}
int main()
{
    cout<<power(2.00000, 10);
    return 0;
}