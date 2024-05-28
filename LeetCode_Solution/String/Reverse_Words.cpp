#include<bits/stdc++.h>
using namespace std;
class Solution{
 public:
    string reverseWords(string s){
        stringstream ss(s);
        string token = "";
        string res = "";
        
        while(ss >> token){
            res = token + " "+res;
        }
        int n = res.size();
        return res.substr(0, n-1);
    }
};
int main()
{
    Solution sol;
    cout<<sol.reverseWords("Reverse Words in a String");
   return 0;
}








// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s = "the sky is blue";
//     vector<string> ans = "";
//     int n = s.length();
//     for(int i = 0; i<)
//     cout<<n;
//     cout<<ans;
//    return 0;
// }