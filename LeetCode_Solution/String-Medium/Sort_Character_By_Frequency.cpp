#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    static bool comparator(pair<char, long long>a, pair<char, long long>b){
        return a.second > b.second;
    }
    string frequencySort(string &str){
        unordered_map<char, long long>ump;
        for(int i = 0; i<str.length(); i++){
            ump[str[i]]++;
        }
        vector<pair<char, long long>>v(ump.begin(), ump.end());
        sort(v.begin(), v.end(), comparator);

        string ans = "";
        int count = 0;
        for(auto ele : v){
            count = ele.second;

            while(count--){
                ans.push_back(ele.first);
            }
        }
        return ans;
    }
};
int main()
{
    Solution sol;
    string s = "tree";
    cout<<sol.frequencySort(s);
   return 0;
}