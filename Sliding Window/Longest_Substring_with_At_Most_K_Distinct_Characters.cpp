#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // brute force
    int kDistinctChars(int k, string &str)
    {

        int maxi = 0;
        for (int i = 0; i < str.size(); i++)
        {
            unordered_set<char> st;
            for (int j = i; j < str.size(); j++)
            {
                st.insert(str[j]);
                if (st.size() <= k)
                {
                    int len = j - i + 1;
                    maxi = max(maxi, len);
                }
                else
                    break;
            }
        }
        return maxi;
    }
    // optimal approach using sliding window;
    int kDistinctChars1(int k, string &str)
    {
        int maxi = 0;
        int l = 0;
        int r = 0;
        unordered_map<char, int> ump;
        while (r < str.size())
        {
            ump[str[r]]++;
            if (ump.size() > k)
            {
                ump[str[l]]--;
                if (ump[str[l]] == 0)
                {
                    ump.erase(str[l]);
                }
                l++;
            }
            if (ump.size() <= k)
            {
                int len = r - l + 1;
                maxi = max(maxi, len);
            }
            r++;
        }
        return maxi;
    }
};
int main()
{
    Solution *sol = new Solution();
    string str = "abcddefgh";
    cout << sol->kDistinctChars1(3, str);

    return 0;
}