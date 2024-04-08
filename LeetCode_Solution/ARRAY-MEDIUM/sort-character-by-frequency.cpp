#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    static bool comparator(pair<char, long long>a, pair<char, long long>b){
        if(a.second == b.second){
            return a.first < b.first;
        }
        return a.second > b.second;
    }
    string frequencySort(string &str){
        unordered_map<char, long long>mpp;
        for(int i = 0; i<str.size(); i++){
            mpp[str[i]]++;
        }

        vector<pair<char, long long>>v(mpp.begin(), mpp.end());
        sort(v.begin(), v.end(), comparator);

        string ans= "";
        int count = 0; 
        for(auto ele: v){
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
    string str = "tree";
    cout<<sol.frequencySort(str);
    cout<<endl;
    long long ans = str.size();
    cout<<str.size();

    
   return 0;
}