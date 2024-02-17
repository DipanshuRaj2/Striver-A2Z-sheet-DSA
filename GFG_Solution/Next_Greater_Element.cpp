#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        vector<long long>ans;
        for(int i = 0; i<n-1; i++){
            int temp = -1;

            for(int j = i+1; j<n; j++){
                if(arr[i]<=arr[j]){
                    temp = arr[j];
                    break;
                }
                
            }
            ans.push_back(temp);
        }
        ans.push_back(-1);
        return ans;

        // Your code here
    }
};
int main(){
    Solution sol;
    vector<long long>arr = {4,5,2,25};
    int n = arr.size();

    vector<long long >ans;
    ans= sol.nextLargerElement(arr, n);

    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}