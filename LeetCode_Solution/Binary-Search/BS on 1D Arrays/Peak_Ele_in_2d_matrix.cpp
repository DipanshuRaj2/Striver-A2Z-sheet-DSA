/*Input: mat = [[1,4],[3,2]]
Output: [0,1]
Explanation: Both 3 and 4 are peak elements so [1,0] and [0,1] are both acceptable answers.
*/

//Peak ELement in 2d array are those which is greater than top element, bottom ele, left ele, right ele;
// #include<bits/stdc++.h>
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
// int main()
// {
//      vector<vector<int>> mat = {
//         {1, 4, 3},
//         {6, 7, 8},
//         {2, 5, 9}
//     };
//     vector<int>ans = findPeakGrid(mat);
//     int n = ans.size();
//     for(int i = 0; i<n; i++){
//         cout<<ans[i]<<" ";
//     }
//    return 0;
// }
// In this case TIme complexity Is O(n*m) so we reduce the time complexity;

#include<bits/stdc++.h>
using namespace std;
vector<int>findPeakGrid(vector<vector<int>> & mat){
    int n = mat.size();
    int m = mat[0].size();

    int low = 0; int high = n * m -1;

    int rowIndex = -1; int colIndex = -1;

    int maxi = INT_MIN;
    for(int i = low; i <= high; i++){
        int row = i/m; int col = i % m;

        if(mat[row][col] > maxi){
             maxi = mat[row][col];
            rowIndex = row;
            colIndex = col;
        }
        
    }
    return{rowIndex, colIndex};
}
int main()
{
vector<vector<int>> mat = {
        {1, 4, 3},
        {6, 7, 8},
        {2, 5, 9}
    };
    vector<int>ans = findPeakGrid(mat);
    int n = ans.size();
    for(int i = 0; i<n; i++){
        cout<<ans[i]<<" ";
    }
   return 0;
}
