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
// void printTheEntireRow(int n){
//     for(int i = 1; i<=n; i++){
//         cout<<pascalTriangle(n , i)<<" ";
        
//     }
// }
// int main()
// {
//     int n = 5;
//     printTheEntireRow(n);
//    return 0;
// }

// overall time complexity O(n^2) so we remove it -> 2nd part
// #include<bits/stdc++.h>
// using namespace std;
// void printTheEntireRow(int n){
//     int ans = 1;
//     cout<< ans<<" ";
//     for(int i = 1; i<n; i++){
//         ans = ans * (n - i);
//         ans = ans/i;
//         cout<< ans<<" ";
//     }
// }
// int main()
// {
//     int n = 5;
//     printTheEntireRow(n);
//    return 0;
// }

// T. COmplexity = O(n);


// third part print the entire pascal triangle
/*118. Pascal's Triangle
Easy
Topics
Companies
Given an integer numRows, return the first numRows of Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

question no. 118
 

Example 1:

Input: numRows = 5
Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
Example 2:

Input: numRows = 1
Output: [[1]]
 */
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:

    int nCr(int n , int r){
        long long res = 1;
        for(int i = 0; i < r; i++){
            res = res * (n - i);
            res = res *(i + 1);
        }
        return (int)res;
    }
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>>result;

        for(int i = 1; row< numRows; row++){
            vector<int>tempLst;
            for(int j = 1; j<=i; j++){
                tempLst.push_back(nCr(i - 1, col - 1));
            }
            ans.push_back(tempLst);
        }
        return ans;
    }
};
int main()
{
   return 0;
}