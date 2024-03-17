#include<bits/stdc++.h>
using namespace std;
int longestSubarrayWithSumK(vector<int> a, long long k) {
    int len = 0;
    for(int i = 0; i<a.size(); i++){
        int sum = 0;
        for(int j = i; j<a.size(); j++){
            sum += a[j];
            if(sum == k){
                len = max(len, j-i+1);
            }
        }
    }
    return len;

}
int main()
{
    vector<int> a = {1, 2, 3, 1, 1, 1, 1};
    long long k = 3;
    cout<<longestSubarrayWithSumK(a, k);

   return 0;
}