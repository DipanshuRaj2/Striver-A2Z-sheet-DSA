#include <bits/stdc++.h>
using namespace std;
string KthDistinct(vector<string> &arr, int k)
{
    /*
    unordered_map<string, int> ump;
    for (int i = 0; i < arr.size(); i++)
    {
        ump[arr[i]]++;
    }
    vector<string> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        if (ump.find(arr[i]) != ump.end())
        {
            if (ump[arr[i]] == 1)
                ans.push_back(arr[i]);
        }
    }
    int cnt = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        cnt++;
        if (cnt == k)
        {
            return ans[i];
        }
    }
    return "";
    */
    unordered_map<string, bool> ump;
    for (int i = 0; i < arr.size(); i++)
    {
        if (ump.find(arr[i]) != ump.end())
        {
            ump[arr[i]] = false;
        }
        else{
            ump[arr[i]] = true;
        }
    }
    int cnt = 0;
    for (string ele: arr)
    {
        if (ump[ele] == true)
        {
            cnt++;
            if (cnt == k)
            {
                return ele;
            }
        }
    }
    return "";
}
int main()
{
    vector<string> arr = {"d", "b", "c", "b", "c", "a"};
    int k = 2;
    cout << "KthDistinct: " << KthDistinct(arr, k);
    return 0;
}