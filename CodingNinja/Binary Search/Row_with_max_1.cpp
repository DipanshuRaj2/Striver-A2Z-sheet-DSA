// #include<bits/stdc++.h>
// using namespace std;
// int rowWithMax1s(vector<vector<int>> & matrix, int n, int m){
//     int index = -1; 
//     int max_cnt = 0;
//     for(int i = 0; i<n; i++){
//         int cntrow = 0;
//         for(int j = 0; j<m;j++){
//             cntrow += matrix[i][j]; 
//         }
//         if(cntrow > max_cnt){
//             max_cnt = cntrow;
//             index = i;
//         }
//     }
//     return index;
// }
// int main()
// {
//     vector<vector<int>> matrix ={{0,0},{0,1},{0,0},{0,0},{0,1},{0,1}};
//     int n = matrix.size();
//     int m = matrix[0].size();
//     cout<< rowWithMax1s(matrix , n, m);
//    return 0;
// }

//this code take order of time complexity O(m*n);

#include<bits/stdc++.h>
using namespace std;
int lowerBound(vector<int> arr, int n, int x){
    int low = 0; int high = n - 1;
    int ans = n;
    while(low <= high){
        int mid = (low+high)/2;
        if(arr[mid] >= x) {
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return ans;
}
int rowWithMax1s(vector<vector<int>>matrix, int n, int m){
    int index = -1;
    int cntMax = 0;
    for(int i = 0; i<n; i++){
        int cntOnes = m - lowerBound(matrix[i], m, 1);
        if(cntOnes > cntMax){
            cntMax = cntOnes;
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
    cout<<rowWithMax1s(matrix , n, m);
   return 0;
}