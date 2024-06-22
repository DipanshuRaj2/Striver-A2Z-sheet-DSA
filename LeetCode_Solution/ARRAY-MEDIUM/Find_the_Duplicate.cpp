#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int findDuplicate(vector<int>& nums){
        int n = nums.size();
        vector<int> freqArr(n,0);
        for(int i = 0; i<n; i++){
            freqArr[nums[i]]++;
        }
        for(int i = 0; i<n; i++){
            if(freqArr[i] > 1){
                return i;
            }
        }
        return -1;
    }
};
int main()
{
    Solution sol;
    vector<int>arr = {3,3,3,3,3};
    cout<<sol.findDuplicate(arr);
   return 0;
}