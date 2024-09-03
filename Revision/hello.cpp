// #include <bits/stdc++.h>
// using namespace std;
// int KadaneAlgo(vector<int> &nums)
// {
//     int stIdx = -1;
//     int edIdx = -1;
//     int maxi = 0;
//      int sum = 0;
//      int start = -1;
//         for(int i = 0; i<nums.size(); i++){
//             if(sum == 0) start = i;
//             sum += nums[i];
//             if(sum >= maxi){
//              maxi = max(sum, maxi);
//              stIdx = start;
//              edIdx = i;
//             }
//             if(sum <= 0){
//                 sum = 0;
//             }
//         }
//     for(int i = stIdx; i<=edIdx; i++){
//         cout<<nums[i]<<" ";
//     }
//     cout<<endl;
//     return maxi;
// }
// int main()
// {
//     vector<int> arr = {5,4,-1,7,8};
//     cout << KadaneAlgo(arr);
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
vector<int> leaders(vector<int>& arr)
{
    vector<int>ans;
    for (int i = 0; i < arr.size(); i++)
    {
        bool leader = true;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] > arr[i])
            {
                leader = false;
                break;
            }
        }
        if(leader){
            ans.push_back(arr[i]);
        }
    }
    return ans;
}
int main()
{
    vector<int> arr = {63, 70, 80, 33, 33, 47, 20};
    arr = LeadersArray(arr);
    for(int i = 0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}