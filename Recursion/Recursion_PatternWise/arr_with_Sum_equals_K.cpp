#include <bits/stdc++.h>
using namespace std;
void printSumEqualsToK(int i, vector<int> &arr, int s, int n, vector<int> &ds, int sum)
{
    if (i == n)
    {
        if (s == sum)
        {
            for (auto ele : ds)
            {
                cout << ele<<" ";
            }
            cout << endl;
        }
        return;
    }

    ds.push_back(arr[i]);
    s += arr[i];
    // pick
    printSumEqualsToK(i + 1, arr, s, n, ds, sum);

    s -= arr[i];
    ds.pop_back();

    // not pick
    printSumEqualsToK(i + 1, arr, s, n, ds, sum);
}
int main()
{
    vector<int> arr = {3,5,6,7};
    vector<int> ds;
    int sum = 9;
    printSumEqualsToK(0, arr, 0, arr.size(), ds, sum);
    return 0;
}