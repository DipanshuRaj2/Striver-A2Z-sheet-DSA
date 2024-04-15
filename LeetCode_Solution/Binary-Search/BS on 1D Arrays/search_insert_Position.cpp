#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] >= target){
                return i;
            }
        }
        if(nums.size() < target){
            return nums.size();
        }
        return 0;
    }
};
int main()
{
    Solution sol;
    vector<int>arr={1,3,5,6};
    int target = 5;
    cout<<arr.size();
    cout<<endl;
    cout<<sol.searchInsert(arr, target);
   return 0;
}
