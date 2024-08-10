#include<bits/stdc++.h>
using namespace std;
void fun(int i, int n){
    if(i < 2){
        return;
    }
    i  = i - 1;
    fun(i, n);
    cout<<i<<" ";
}
int main()
{
    fun(4, 3);
} 