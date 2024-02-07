#include<bits/stdc++.h>
using namespace std;
int maxLength(vector<int>&v, int target){
    int n = v.size();
    
    int len = 0;
    for(int i = 0; i<n; i++){
        for(int j = i; j < n; j++){
            int sum = 0;
            for(int k=i; k <=j; k++){
                sum = sum +v[k];
            }
            if(sum == target){
                len = max(len, j-i+1);
            }
        }
    }
    return len;
}
int main()
{
    vector<int> v={1,2,3,1,1,1,1,1,4,2,3};
    int target = 3;
    int n = maxLength(v , target);
    cout<<n;
   return 0;
}