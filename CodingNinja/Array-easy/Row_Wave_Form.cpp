/*Problem statement
You are given a 2D array with dimensions ‘N*M’. You need to read the array elements row-wise and return a linear array that stores the elements like a wave i.e the 1st-row elements are stored from left to right, 2nd-row elements are stored from right to left, and so on.

Detailed explanation ( Input/output format, Notes, Images )
Constraints:
1 <= ‘T’ <= 10
1 <= 'N', ‘M’ <= 10^3
1 <= ‘ARR[i][j]’ <= 10^5

Where ARR[i][j] is the array element in the ith row of the jth column.

Time limit: 1 second
Sample Input 1:
2
2 2
1 2
0 5
2 3
5 1 2
7 0 1
Sample Output 1:
1 2 5 0
5 1 2 1 0 7
Explanation of Input 1:
For test case 1, the array is traversed as:
The first row is traversed from left to right. -> [1, 2]
The second row is traversed from right to left. -> [5, 0]
Therefore the final answer is [1, 2, 5, 0].

For test case 2, the array is traversed as:
First row is traversed from left to right. -> [5, 1, 2]
Second row is traversed from right to left. -> [1, 0, 7]
Therefore the final answer is [5, 1, 2, 1, 0, 7]
Sample Input 2:
1
3 3
0 1 1
8 0 9
5 4 1
Sample Output 2
0 1 1 9 0 8 5 4 1
Explanation of Input 1:
For test case 1, the array is traversed as:
The first row is traversed from left to right. -> [0, 1, 1]
The second row is traversed from right to left. -> [9, 0, 8]
The third row is traversed from left to right -> [5, 4, 1]
Therefore the final answer is [0, 1, 1, 9, 0, 8, 5, 4, 1]*/
#include <bits/stdc++.h>
using namespace std;
vector<int>rowWave(vector<vector<int>>&arr){
    int n = arr.size();
    int m = arr[0].size();
    vector<int>ans;
    for(int i = 0; i <n; i++){
        for(int j = 0; j<m; j++){
            if(i % 2 == 0)
                ans.push_back(arr[i][j]);
            else
                ans.push_back(arr[i][m-j-1]);
        }
    }
    return ans;
}
int main()
{
    vector<vector<int>>arr = {{5, 1, 2},{7, 0, 1}};
    vector<int>ans = rowWave(arr);
    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}