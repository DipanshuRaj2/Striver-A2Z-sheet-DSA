// #include<bits/stdc++.h>
// using namespace std;
// vector<int>TwoSum(vector<int>&nums, int target){
//     unordered_map<int, int>ump;
//     int i = 0; 
//     while(i < nums.size()){
//         int rem = target - nums[i];
//         if(ump.find(rem) != ump.end()){
//             return {ump[rem] , i};
//         }
//         ump[nums[i]] = i;
//         i++;
//     }
//     return {-1, -1};
// }
// vector<int>TwoPointer(vector<int>&nums, int target){
//     sort(nums.begin(), nums.end());
//     int i = 0; int n = nums.size() - 1;
//     while(i <= n){
//         if(nums[i] + nums[n] == target){
//             return{i, n};
//         }
//         else if(nums[i] + nums[n] >= target){
//             n--;
//         }
//         else{
//             i++;
//         }
//     }
//     return{-1, -1};
// }
// int main(){
//     vector<int>arr = {2, 6, 5, 8, 11};
//     int target = 14;
//     arr = TwoSum(arr, target);
//     cout<<arr[0] <<" "<<arr[1];
//    return 0;
// }



// brute force will be easy
// 3 sum
//so I am using doing optimal approach
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>threeSum(vector<int>&nums){
    vector<vector<int>>ans;
    set<vector<int>>st;
    for(int i = 0; i<nums.size() - 1; i++){
        
        unordered_map<int, int>ump; // store the (arr[j], j);
        for(int j = i+1; j<nums.size(); j++){
            int k = -(nums[i] + nums[j]);
            if(ump.find(k) != ump.end()){
                vector<int>temp = {nums[i], nums[j], k};              
                sort(temp.begin(), temp.end());
                st.insert(temp);
            }
            ump[nums[j]] = j;
        }
    }
    for(auto it : st){
        ans.push_back(it);
    }
    return ans;
}
// solving by 2 pointer technique
vector<vector<int>>threeSum1(vector<int>&nums){

    int n = nums.size();
    vector<vector<int>>ans;
    sort(nums.begin(), nums.end());
    for(int i = 0; i<nums.size(); i++){
        if(i > 0 && nums[i -1] == nums[i])continue;
        int j = i + 1;
        int k = n - 1;
        while(j < k){
            int sum = nums[i] + nums[j] + nums[k];
            if(sum < 0){
                j++;
            }
            else if(sum > 0){
                k--;
            }
            else{
                vector<int>temp = {nums[i], nums[j], nums[k]};
                ans.push_back(temp);
                j++;
                k--;
                while(j < k && nums[j] == nums[j-1]) j++;
                while(j < k && nums[k] == nums[k+1]) k--;
            }
        }
    }
    return ans;
    
}
int main(){
    vector<int>nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>>ans = threeSum1(nums);
    for(int i = 0; i<ans.size(); i++){
        cout<<"{";
        for(int j = 0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"}";
    }
   return 0;
}   