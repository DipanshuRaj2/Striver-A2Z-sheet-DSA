/*Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

You must do it in place.

 

Example 1:


Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
Output: [[1,0,1],[0,0,0],[1,0,1]]
Example 2:


Input: matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]
Output: [[0,0,0,0],[0,4,5,0],[0,3,1,0]]*/



// bruteforce approach // O(n^3)


// #include<bits/stdc++.h>
// using namespace std;
// class Solution{
//     public:
//     void setZeroe(vector<vector<int>>&matrix){
//         int n = matrix.size();
//         cout<<n; // row size 4
//         cout<<endl;
//         int m = matrix[0].size();
//         cout<<m; // col size 3
//         cout<<endl;
//         vector<vector<int>>visited = matrix;
//         for(int i = 0; i<n; i++){
//             for(int j = 0; j<m; j++){
//                 if(matrix[i][j] == 0){
//                     for(int k =0; k<m;k++){
//                         visited[i][k] = 0;
//                     }
//                 }
//             }
//         }
        
//         for(int i = 0; i<n; i++){
//             for(int j = 0; j<m; j++){
//                 if(matrix[i][j] == 0){
//                     for(int k = 0; k<n; k++){
//                         visited[k][j] = 0;
//                     }
//                 }
//             }
//         }

//         for(int i = 0; i<n; i++){
//             for(int j= 0; j<m;j++){
//                 matrix[i][j] = visited[i][j];
//             }
//         }
//     }
// };
// int main()
// {
//     Solution sol;
//     vector<vector<int>>matrix = {{1,1,1},{1,0,1},{1,1,1},{1,1,1}};
//     sol.setZeroe(matrix);

//     int n = matrix.size();
//     int m = matrix[0].size();
//     for(int i = 0; i<matrix.size(); i++){
//         for(int j = 0; j<matrix[i].size(); j++){
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
    
    
//    return 0;
// }



//better solution O(n^2)

#include<bits/stdc++.h>
using namespace std;
void zeroMatrix(vector<vector<int>> &matrix){

    int n = matrix.size();
    int m = matrix[0].size();

    int col[m] = {0};
    int row[n] = {0};

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(matrix[i][j] == 0){
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m;j++){
            if(row[i] == 1 || col[j] == 1){
                matrix[i][j] = 0;
            }
        }
    }
}
int main()
{
    vector<vector<int>>matrix = {{1,1,1},{1,0,1},{1,1,1},{1,1,1}};
    zeroMatrix(matrix);

    int n = matrix.size();
    int m = matrix[0].size();
    for(int i = 0; i<matrix.size(); i++){
        for(int j = 0; j<matrix[i].size(); j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
   return 0;
}
