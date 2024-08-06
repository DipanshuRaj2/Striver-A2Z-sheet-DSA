#include <bits/stdc++.h>
using namespace std;
bool amicablePiar(int a, int b){
    int sum = 0;
    for(int i = 1; i<a; i++){
        if(a % i == 0){
            cout<<i<<" ";
            sum = sum+i;
        }
    }
    cout<<endl;
    cout<<sum;
    cout<<endl;
    return true;
}
int main()
{
    int a = 220;
    int b = 284;
    cout<<amicablePiar(a, b);
    return 0;
}