// #include <bits/stdc++.h>
// using namespace std;
// int maximumSubArray(vector<int> &v)
// {
//     int maxi = INT_MIN;
//     for (int i = 0; i < v.size(); i++)
//     {
//         int sum = 0;
//         for (int j = i; j < v.size(); j++)
//         {
//             sum = sum + v[j];

//             maxi = max(maxi, sum);
//         }
//     }
//     return maxi;
// }
// int main()
// {
//     vector<int> v = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
//     cout << maximumSubArray(v);

//     return 0;
// }
// kadane algorithm

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int maxi = nums[0];
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sum = sum + nums[i];
            maxi = max(sum, maxi);
            if (sum < 0)
            {
                sum = 0;
            }
        }
        return maxi;
    }
};
int main()
{
    Solution s;
    // vector<int> v = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    vector<int> v= {5,10, 5,-15,20};
    cout << s.maxSubArray(v);
    return 0;
}