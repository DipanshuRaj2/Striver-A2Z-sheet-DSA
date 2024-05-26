#include<bits/stdc++.h>
using namespace std;
bool searchMatrix(vector<vector<int>>matrix, int target){
    int n = matrix.size();
    int m = matrix[0].size()
    int row = 0; int col = m - 1;

    while(row < n && col >= 0){
        if(matrix[row][col] == target){
            return true;
        }
        else if(matrix[i][j] > target){
            col--;
        }
        else{
            row++;
        }
    }
    return false;
}
int main()
{
   return 0;
}