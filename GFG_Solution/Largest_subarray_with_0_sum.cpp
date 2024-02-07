#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int maxLength(vector<int>&v , int n){
        int count = 0;
        for(int i = 0; i<n; i++){
            for(int j = i+1; j<n; j++){
                if(v[i] + v[j]==0){
                    count++;
                }
            }
        }
        return count;
    }
};

int main()
{
    vector<int>A = {15,-2,2,-8,1,7,10,23};
    int n = A.size();
    Solution s;
    cout<<s.maxLength(A , n);
   return 0;
}