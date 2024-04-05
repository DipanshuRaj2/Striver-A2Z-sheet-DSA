#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> & arr){
    int n1 = arr.size();
    int n2 = arr[0].size();
    vector<vector<int>>ans;
    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<n-1; j++){
            if(ans.size() == 0){
             else if(arr[i][j+1] > arr[i+1][j] ){
                ans.push_back(arr[i][j]);
             }

            }
            else if(ans.size()!= 0){
                else if(ans[i][j+1] > arr[i+1][j]){
                    ans.push_back(ans[])
                }
            }
        }
    }
    return ans;
    
}
int main()
{
    vector<vector<int>>arr={{1, 3},{2, 4},{3, 5},{6, 7}};
    mergeOverlappingIntervals(arr);
   return 0;
}