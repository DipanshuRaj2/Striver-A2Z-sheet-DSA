#include <bits/stdc++.h>
using namespace std;
int main()
{   
    // int a = 2;
    // int b = 10;

    // int temp;
    // temp = a;
    // a = b;
    // b = temp;
    // cout<<"a: "<<a<<" "<<"b: "<<b;
    // it use extra varible we use it without extra space;

    int a = 2;
    int b = 10;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout<<"a: "<<a<<" "<<"b: "<<b;
    return 0;
}