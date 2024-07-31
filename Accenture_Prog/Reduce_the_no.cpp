/*(18 Sept 2023)
Given a number N your Task is to make N a single digit number by performing these operations

1) If N is odd , make it floor(N/2)
2) If N is even, make it floor((N-2)/2)
3) If N is already a single digit , print as it is

Example:
Input 1: N=25
Output 1: 5

Input 2: N=10
Output: 4

Input 3: N=5
Output: 5
*/

#include<bits/stdc++.h>
using namespace std;
int reduceNumber(int ans){

     if(ans < 10){
          return ans;
        }
    while( ans >= 10){
        if(ans % 2 == 1){
            ans = floor(ans/2);
        }else{
            ans = floor((ans - 2)/2);
        }
    }
    return ans;
}
int main(){
    cout<<reduceNumber(11);
}