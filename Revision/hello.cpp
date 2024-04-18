// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     for(int i = 0; i<100; i++){
//         if(i % 2 == 0){
//             cout<<"Hello world \n";
//         }
//         else{
//             cout<<"dlrow olleH \n";
//         }
//     }
//    return 0;
// }
//optimised solution

// #include<bits/stdc++.h>
// using namespace std;
// int fibonacciSum(int n){

//    if(n <=1){
//     return n;
//    }
//     int fsum = fibonacciSum(n-2);
//     int lsum = fibonacciSum(n-1);

//     return fsum + lsum;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     cout<<fibonacciSum(n);
//    return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int fibonacciSeries(int n ){
    int fib1 = 0;
    int fib2 = 1;
    for(int i = 2; i<=n; i++){
        int next = fib1+fib2;
        fib1 = fib2;
        fib2 = next;
    }
    return fib2;
}
int main()
{
    int n;
    cin >> n;
    cout<<fibonacciSeries(n);
   return 0;
}