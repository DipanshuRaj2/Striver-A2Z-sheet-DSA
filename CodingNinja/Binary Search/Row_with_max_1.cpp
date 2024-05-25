#include<bits/stdc++.h>
using namespace std;
int rowWithMax1s(vector<vector<int>> & matrix, int n, int m){
    int index = -1; 
    int max_cnt = -1;
    for(int i = 0; i<n; i++){
        int cntrow = 0;
        for(int j = 0; j<m;j++){
            cntrow += matrix[i][j]; 
        }
        if(cntrow > max_cnt){
            max_cnt = cntrow;
            index = i;
        }
    }
    return index;
}
int main()
{
    vector<vector<int>> matrix ={{0,0},{0,1},{0,0},{0,0},{0,1},{0,1}};
    int n = matrix.size();
    int m = matrix[0].size();
    cout<< rowWithMax1s(matrix , n, m);
   return 0;
}