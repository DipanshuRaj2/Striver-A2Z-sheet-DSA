//1st part you have given n = number, r = length to print the no on the pascal triangle

// #include<bits/stdc++.h>
// using namespace std;
// int nCr(int n, int r){
//     long res = 1;
//     for(int i = 0; i<r; i++){
//         res = res * (n - i);
//         res = res /(i+1);
//     }
//     return res;
    
// }
// int pascalTriangle(int n , int r) {
//         int element = nCr(n - 1, r-1);
//         return element;
// }
// int main()
// {
//     int n = 5, r = 3;
//     cout<< pascalTriangle(n , r);
//    return 0;
// }

// 2nd part print the entire row 

#include<bits/stdc++.h>
using namespace std;
int nCr(int n, int r){
    long res = 1;
    for(int i = 0; i<r; i++){
        res = res * (n - i);
        res = res /(i+1);
    }
    return res;
    
}
int pascalTriangle(int n , int r) {
        int element = nCr(n - 1, r-1);
        return element;
}
void printTheEntireRow(int n){
    for(int i = 1; i<=n; i++){
        cout<<pascalTriangle(n , i)<<" ";
        
    }
}
int main()
{
    int n = 5;
    printTheEntireRow(n);
   return 0;
}


