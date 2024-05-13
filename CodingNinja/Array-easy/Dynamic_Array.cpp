#include<bits/stdc++.h>
using namespace std;
int* printDivisors(int n, int &size){
    int* divisors = new int[n];
    size = 0;
    for(int i = 1; i<= n; i++){
        if(n % i == 0){
            divisors[size++] = i;
        }
    }
    return divisors;
}
int main()
{
   const int num=10;
    int *res=printDivisors(10, num);
    cout<<res;
   return 0;
}