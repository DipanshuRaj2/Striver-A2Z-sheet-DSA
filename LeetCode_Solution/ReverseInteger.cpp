#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int reverse(int x)
    {
        vector<int> v;
        while (x != 0)
        {
            int ans = x % 10;
            if((x < INT_MIN)|| (x>INT_MAX)){
                return 0;
            }
            v.push_back(ans);
            x = x / 10;
        }
        int n = v.size();
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int power = n - i - 1;

            int value = v[i] * pow(10, power);

            ans = ans + value;
        }
        return ans;
    }
};
int main()
{
    Solution s;
    int x = 234;
    cout<<s.reverse(x);

    return 0;
}