// brute force
//  #include <bits/stdc++.h>
//  using namespace std;
//  int f1(int a, int b){
//      if(b == 0){
//          return 1;
//      }
//      return  a * f1(a, b-1);

// }
// int main()
// {
//     int a = 10, b = 9;
//     int ans = f1(a, b);
//     cout<< ans;
//     return 0;
// }

// optimised code

#include <bits/stdc++.h>
using namespace std;
int f1(int a, int b){
    //base case
    if(b == 0) return 1;
    if(b%2 == 0){
        //for even
     int result = f1(a, b/2); 
     return result * result;
    }
    else{
        //for odd
        int result = f1(a, (b-1)/2);
        return a * result * result; 
    }
}
int main()
{
    int a = 2, b = 3;
    int ans = f1(a, b);
    cout<<ans;
    return 0;
}