#include <bits/stdc++.h>
using namespace std;
// vector<int> getSecondOrderElements(int n, vector<int> a)
// {
//     // Write your code here.
//     vector<int> ans;
//     int max = INT_MIN;
//     int min = INT_MAX;
//     int secondmax = INT_MIN;
//     int secondmin = INT_MAX;


//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] > max)
//             max = a[i];
//     }
    
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] > secondmax && a[i] != max)
//         {
//             secondmax = a[i];
//         }
//     }
//     ans.push_back(secondmax);

//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] < min)
//             min = a[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] < secondmin && a[i] != min)
//         {
//             secondmin = a[i];
//         }
//     }
//     ans.push_back(secondmin);
//     return ans;
// }


vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    vector<int>ans;
    sort(a.begin(), a.end());
    ans.push_back(a[n-2]);
    ans.push_back(a[1]);
    return ans;
}
int main()
{
    vector<int> a = {3,4,2,5};
    int n = a.size();
    vector<int> ans = getSecondOrderElements(n, a);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
    }
    return 0;
}

