/*Problem statement
It is Edward's birthday today. His friends have bought him a huge circular cake.
Edward wants to find out the maximum number of pieces he can get by making exactly N straight vertical
cuts on the cake.
Your task is to write a function that returns the maximum number of pieces that can be obtained by making
N number of cuts.

Note: Since the answer can be quite large, modulo it by 1000000007
Prece

Cmt

Input Specification:
input1: An integer N denoting the number of cuts

Output Specification:
Return the maximum number of pieces that can be obtained by making N cuts on the cake*/
#include <bits/stdc++.h>
using namespace std;
int edwin_birthday(int &n){
    int sum = (n*(n+1))/2;
    int ans = sum + 1;
    ans = (ans % 1000000007);
    return ans;
}
int main()
{
    int n = 4;
    cout<<edwin_birthday(n);
    return 0;
}