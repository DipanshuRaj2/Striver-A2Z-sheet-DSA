#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool targetBound(vector<int>&mat, int n, int target){
        int low = 0;
        int high = n-1;
        while(low <= high){
            int mid = (low+high)/2;
            if(mat[mid] == target){
                return true;
            }
            else if(mat[mid] > target){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }  
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i = 0; i<n; i++){
          if(targetBound(matrix[i], m, target))
             return true;
        }
        return false;
    }
};

int main()
{
    Solution sol;
    vector<vector<int>>matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}} ;
    int target = 3;
    cout<<sol.searchMatrix(matrix, target);
   return 0;
}
