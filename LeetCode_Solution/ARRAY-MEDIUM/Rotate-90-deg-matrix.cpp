#include<bits/stdc++.h>
using namespace std;
// class Solution {
// public:
//     void rotate(vector<vector<int>>& matrix) {
//         int n = matrix.size();
//         vector<vector<int>>ans=matrix;
//         for(int i = 0;i<n;i++){
//             for(int j = 0;j<n;j++){
//                ans[i][j] =matrix[j][i];
//             }
//         }
        
//     }
// };
int main()
{
    // Solution sol;
    vector<vector<int>>matrix = {{1,2,3},{4,5,6},{7,8,9}};
    // sol.rotate(matrix);
    int n = matrix.size();
    for(int i = 0; i<n; i++){
        for(int j = n-1; j>=0;j--){
            cout<<matrix[j][i];
        }
        cout<<endl;
    }
   return 0;
}
///