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





//another solution 
#include <bits/stdc++.h>
using namespace std;
string removeExtraSpace(string &str){
    int i = 0; 
    int index = 0;
    int n = str.length();
    while(i < n && str[i] == ' '){
         i++;
    }
    while(i < n){
        while(i<n && str[i] != ' '){
            str[index++] = str[i++];
        }
        while(i<n && str[i] == ' '){
            i++;
        }
        if(i<n)
            str[index++] = ' ';
    }
    str.resize(index);
    // cout<<str.length()<<endl;
    return str;
}

string reverseString(string s)
{
    s = removeExtraSpace(s);
    reverse(s.begin(), s.end());
    int j = 0;
    for (int i = 0; i <= s.length(); i++)
    {
        if (i == s.length() || s[i] == ' ')
        {
            reverse(s.begin() + j, s.begin() + i);
            j = i + 1;
        }
    }
    return s;
}
int main()
{
    string s = "   Hello    world";
    cout<<removeExtraSpace(s)<<"\n";
    cout<<s.length()<<endl;
    // cout<<reverseString(s);
    
    return 0;
}