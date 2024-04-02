#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        vector<int>intersectionOfArray(vector<int> &A, vector<int> &B){
            vector<int>ans;
            int n = A.size();
            int m = B.size();

            int i = 0;
            int j = 0;

            while(i < n && j < m){

                if(A[i] == B[j]){
                    ans.push_back(A[i]);
                    i++;
                    j++;
                }
                else if(A[i] < B[j]) {
                    i++;
                }
                else if(A[i] > B[j]){
                    j++;
                }
          }
          return ans;
    }

};
int main()
{
    Solution sol;
    vector < int > A{1,2,3,3,4,5,6,7};
    vector < int > B {3,3,4,4,5,8};

    vector<int>ans = sol.intersectionOfArray(A , B);
    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
   return 0;
}