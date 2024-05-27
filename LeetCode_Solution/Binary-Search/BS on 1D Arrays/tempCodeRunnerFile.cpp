#include<bits/stdc++.h>
// using namespace std;
//     vector<int> findPeakGrid(vector<vector<int>>& mat) {
//         int n = mat.size();
//         int m = mat[0].size();

        
//         for(int i = 0; i<n; i++){
//             for(int j = 0; j<m;  j++){
//                 //check top neighbour
//                 if(i > 0 && mat[i][j] < mat[i-1][j]) continue;
//                 //check bottom neighbour
//                 if(i < n-1 && mat[i][j] < mat[i+1][j]) continue;
//                 //check left neighbour
//                 if(j > 0 && mat[i][j] < mat[i][j-1]) continue;
//                 //check right neighbour
//                 if(j < m-1 && mat[i][j] < mat[i][j+1]) continue;                

//                 return{i, j};
//                 }
//             }
//         return {-1, -1};
//     }