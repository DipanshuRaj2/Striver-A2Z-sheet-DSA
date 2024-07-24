// #include <bits/stdc++.h>
// using namespace std;
// int removeDuplicates(vector<int> &nums)
// {
//     int n = nums.size();
//     vector<int> ans;
//     set<int> st;
//     for(int i = 0; i<nums.size(); i++){
//         st.insert(nums[i]);
//     }
//     int i = 0;
//     for(int ele : st){
//         nums[i] = ele;
//         i++;
//     }
//     return st.size();
// }
// int main()
// {
//     vector<int>nums = {0,0,1,1,1,2,2,3,3,4};
//     cout<<removeDuplicates(nums);
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int> &nums)
{
    int count = 0;
    vector<int>ans;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 0)
        {
            count++;
        }
        if(nums[i] != 0){
            ans.push_back(nums[i]);
        }
    }
    for(int i = 1; i<=count; i++){
        ans.push_back(0);
    }
    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    cout<<"countZeroes: " <<count;
}
int main()
{
    vector<int>arr = {0,1,0,3,12};
    moveZeroes(arr);
    return 0;
}