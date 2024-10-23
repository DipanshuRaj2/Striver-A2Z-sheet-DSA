#include<bits/stdc++.h>
using namespace std;
//extreme brute force
class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int cnt = 0; 
        for(int i = 0; i<nums.size(); i++){
            unordered_set<int>st; // instead set map will be also work in these statement
            for(int j = i; j<nums.size(); j++){
                st.insert(nums[j]);
                if(st.size() == k){
                    cnt++;
                }
                else if(st.size() > k){
                    break;
                }
            }
        }
        return cnt;
    }
    //optimal approach 
    //in this function we just calculate the lesser than equal to k val.
    int subarraysWithLesserThanKDistinct(vector<int>&nums, int k){  
        int cnt = 0;  
        int l = 0; int r = 0; 
        unordered_map<int, int>ump;
        while(r != nums.size()){
            ump[nums[r]]++;
            while(ump.size() > k){
                ump[nums[l]]--;
                if(ump[nums[l]]== 0){
                    ump.erase(nums[l]);
                }
                l++;
            }
            int len = r - l + 1;
            cnt = cnt + len;
            r++;
        }
        return cnt;
    }
    int subarraysWithKDistinct1(vector<int>& nums, int k) {
        int num = subarraysWithLesserThanKDistinct(nums, k);
        int num1 = subarraysWithLesserThanKDistinct(nums, k-1);
        return num - num1;
    }
};
int main(){
    vector<int>nums = {2, 1, 1, 1, 3, 4, 3, 2};
    int k = 3;
    Solution* sol = new Solution();
    int n = sol->subarraysWithKDistinct1(nums, k);
    cout<<n;
    return 0;
}
