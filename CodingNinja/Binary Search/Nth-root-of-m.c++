/*Problem statement
You are given two positive integers 'n' and 'm'. You have to return the 'nth' root of 'm', i.e. 'm(1/n)'. If the 'nth root is not an integer, return -1.



Note:
'nth' root of an integer 'm' is a number, which, when raised to the power 'n', gives 'm' as a result.


Example:
Input: ‘n’ = 3, ‘m’ = 27

Output: 3

Explanation: 
3rd Root of 27 is 3, as (3)^3 equals 27.


Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
3 27


Sample Output 1:
3


Explanation For Sample Input 1:
3rd Root of 27 is 3, as (3)^3 equals 27.


Sample Input 2:
4 69


Sample Output 2:
-1


Explanation For Sample Input 2:
4th Root of 69 is not an integer, hence -1.
*/


// #include<bits/stdc++.h>
// using namespace std;
// #include<bits/stdc++.h>
// int NthRoot(int n, int m) {
//   // Write your code here.
 
//   for(int i = 0; i<m;i++){
//     int ans = pow(i , n);
//     if(ans == m){
//       return i;
//     }
//     else if(ans > m){
//       return -1;
//     }
//   }
//   return 0;
// }
// int main()
// {
//     int n = 9, m = 262145;
//     cout<<NthRoot(n, m);
//    return 0;
// }

//optimal approach

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int NthRoot(int n, int m) {
  // Write your code here.
  int low = 1;
  int high = m;
  while (low <= high){
    int mid = (low+high)/2;
    long long ans = pow(mid, n);
    if(ans > m){
      high = mid -1;
    }
    else if(ans == m){
      return mid;
    }
    else if(ans < m){
      low = mid+1;
    }
   }
  return -1;
}

int main() {
    int n = 9;
    int m = 1953125;
    cout << "The 9th root of 1953125 is: " << NthRoot(n, m) << endl;
    return 0;
}
