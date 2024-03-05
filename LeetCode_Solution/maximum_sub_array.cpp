// #include<bits/stdc++.h>
// using namespace std;
// int maxSubArray(vector<int>v){
//     int start = 0;
//     int end = 0;
//     int maxi = 0;
//     int n = v.size();
//     for(int i = 0; i<n; i++){
//         int sum = 0;
//         for(int j = i; j<n; j++){
//             sum += v[j];
//             maxi = max(sum, maxi);

//         } 
//     }
//     return maxi;
// }
// int main()
// {

//     vector<int> v = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
//     // vector<int> v= {5,10, 5,-15,20};
//     cout << maxSubArray(v);
//    return 0;
// }
// kadane algorithm

// #include <bits/stdc++.h>
// using namespace std;
// class Solution
// {
// public:
//     int maxSubArray(vector<int> &nums)
//     {
//         int maxi = nums[0];
//         int sum = 0;
//         for (int i = 0; i < nums.size(); i++)
//         {
//             sum = sum + nums[i];
//             maxi = max(sum, maxi);
//             if (sum < 0)
//             {
//                 sum = 0;
//             }
//         }
//         return maxi;
//     }
// };
// int main()
// {
//     Solution s;
//     // vector<int> v = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
//     vector<int> v= {5,10, 5,-15,20};
//     cout << s.maxSubArray(v);
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int max_subArray(vector<int>v){
    int sum = 0;
    int maxi= 0;
    int start;
    int ansStart = -1;
    int ansEnd = -1;
    for(int i = 0; i<v.size(); i++){
        if(sum == 0){
            start = i;
        }
        sum += v[i];
        if(sum < 0){
            sum = 0;
        }
        if(sum > maxi){
            maxi = sum;
            ansStart = start, ansEnd = i;
        }
    }
    for(int i = ansStart; i<=ansEnd; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return maxi;
}
int main()
{
    // vector<int> v= {5,10, 5,-15,20};
    vector<int> v = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << max_subArray(v);
   return 0;
}