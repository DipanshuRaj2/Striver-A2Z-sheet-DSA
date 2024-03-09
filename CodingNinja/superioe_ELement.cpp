#include <bits/stdc++.h>
using namespace std;
vector<int> superiorElements(vector<int> &a)
{
    // Write your code here.
    vector<int> ans;
    int n = a.size();
    for (int i = 0; i < n; i++)
    {
        bool leader = true;
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] <= a[j])
            {
                leader = false;
                break;
            }
        }
        if (leader == true)
        {
            ans.push_back(a[i]);
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}
int main()
{
    vector<int> a = {10, 22, 12, 3, 0, 6};
    vector<int>ans = superiorElements(a);

    for(int i = 0; i<ans.size(); i++){
        cout<< ans[i]<<" ";
    }
    return 0;
}