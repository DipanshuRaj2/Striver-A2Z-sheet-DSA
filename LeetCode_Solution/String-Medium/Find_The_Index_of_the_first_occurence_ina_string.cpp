#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = (haystack.length() - needle.length() + 1);
        for(int i = 0; i<n; i++){
            if(haystack[i] == needle[0]){

                if (haystack.substr(i, needle.length()) == needle){
                    return i;
                }

            }
        }
        return -1;
    }
};
int main()
{
    Solution sol;
    string s = "sadbutsad";
    string b = "sad";
    cout<<sol.strStr(s , b);
   return 0;
}