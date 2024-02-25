#include<bits/stdc++.h>
using namespace std;
void sum_of_even_odd(int n){
    int sum1 =0;
    int sum2 =0;
    while(n != 0){
        int ans = n%10;
        if(ans % 2 == 0){
            sum1 += ans; 
        }
        else if(ans % 2 == 1){
            sum2 += ans;
        }
        n = n /10;
    }
    cout<< sum1<<" "<<sum2;
}
int main()
{
    int n = 132456;
    sum_of_even_odd(n);
   return 0;
}