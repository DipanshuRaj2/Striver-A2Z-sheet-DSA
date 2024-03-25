// #include<bits/stdc++.h>
// using namespace std;
// class Solution{
//     public:
//     vector<vector<int>>threeSum (vector<int> &nums){
//         set<vector<int>>st;
//         int n = nums.size();
//         for(int i = 0; i<n; i++){
//             for(int j = i+1; j<n; j++){
//                 for(int k = j+1; k<n; k++){
//                     if(nums[i]+nums[j]+nums[k] == 0){
//                         vector<int>temp{nums[i], nums[j],nums[k]};
//                         sort(temp.begin(), temp.end());
//                         st.insert(temp);
//                     }
//                 }
//             }
//         }
//         vector<vector<int>>ans(st.begin(), st.end());
//         return ans;
//     }
// };
// int main()
// {
//     Solution sol;
//     vector<int>arr = {-1,0,1,2,-1,-4};
//     vector<vector<int>>ans = sol.threeSum(arr);

//     for(auto it: ans){
//         cout<<"[";
//         for(auto i : it){
//             cout<< i <<" ";
//         }
//         cout<<"]";
//     }
//    return 0;
// }

// above code give me O(n^3) time complexity


// #include<bits/stdc++.h>
// using namespace std;
// class Solution{
//     public:
//         vector<vector<int>>threeSum(vector<int> &nums){
//             int n = nums.size();
//             set<vector<int>>st;
//             for(int i = 0; i<n; i++){
//                 set<int>hashset;
//                 for(int j = i+1; j<n; j++){
//                     int third = -(nums[i]+nums[j]);
//                     if(hashset.find(third) != hashset.end()){
//                         vector<int>temp = {nums[i],nums[j],third};
//                         sort(temp.begin(), temp.end());
//                         st.insert(temp);
//                     }
//                     hashset.insert(nums[j]);
//                 }
//             }
//             vector<vector<int>>ans(st.begin(), st.end());
//             return ans;
//         }
// };
// int main()
// {
//     Solution sol;
//     vector<int>nums = {-1,0,1,2,-1,-4};
//     vector<vector<int>>ans = sol.threeSum(nums);

//     for(auto ele : ans){
//         cout<<"[";
//         for(auto it : ele){
//             cout<< it<<" ";
//         }
//         cout<<"]";
//     }
//    return 0;
// }

// above code take extra space O(2n) and time complexity = O(n^2)
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        vector<vector<int>>threeSum(vector<int>& nums){
            vector<vector<int>>ans;
            sort(nums.begin(), nums.end());
            int n = nums.size();
            for(int i = 0; i<n; i++){
                if(i > 0 && nums[i] == nums[i-1]) continue;
                int j = i+1;
                int k = n - 1;

                while(j < k){
                    int sum = nums[i]+nums[j]+nums[k];
                    if(sum < 0){
                        j++;
                    }
                    else if(sum > 0){
                        k--;
                    }
                    else if(sum == 0){
                        vector<int>temp = {nums[i],nums[j],nums[k]};
                        ans.push_back(temp);
                        j++;
                        k--;

                        while(j < k && nums[j] == nums[j-1]) j++;
                        while(j < k && nums[k] == nums[k-1]) k--;

                    }
                }
            }
            return ans;
        }
};
int main()
{
    Solution sol;
    vector<int>nums = {-1,0,1,2,-1,-4};
    vector<vector<int>>ans = sol.threeSum(nums);

    for(auto ele : ans){
        cout<<"[";
        for(auto it : ele){
            cout << it << " ";
        }
        cout<<"]";
    }
   return 0;
}