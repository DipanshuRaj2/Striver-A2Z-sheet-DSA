// Given two strings s and t, determine if they are isomorphic.

// Two strings s and t are isomorphic if the characters in s can be replaced to get t.

// All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.

 

// Example 1:

// Input: s = "egg", t = "add"
// Output: true
// Example 2:

// Input: s = "foo", t = "bar"
// Output: false
// Example 3:

// Input: s = "paper", t = "title"
// Output: true

//using vector array
// #include<bits/stdc++.h>
// using namespace std;
// class Solution{
//     public:
//     bool isIsomorphic(string s, string t){
//         vector<int>v1(128, -1);
//         vector<int>v2(128, -1);
//         if(v1.size()!= v2.size()){
//             return false;
//         }
//         for(int i = 0; i<s.size(); i++){
//             if(v1[s[i]] != v2[t[i]]){
//                 return false;
//             }
//             v1[s[i]] = v2[t[i]] = i;
//         }
//         return true;
//     }
// };
// int main()
// {
//     Solution obj1;
//     string s1, s2;
//     cin >> s1>> s2;
//     cout<<(obj1.isIsomorphic(s1, s2)?"Yes" : "No");
//    return 0;
// }

//another solution

#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool checkOneToOne(string s, string t){
        unordered_map<char, char>m;
        for(int i = 0; i<s.length(); i++){

            if(m.find(s[i])!=m.end()){

                if(m[s[i]] != t[i]){
                    return false;
                }
            }
            else{
              m[s[i]] = t[i];
            }
        }
        return true;
    }
    bool isIsomorphic(string s, string t){
        if(s.size()!= t.size()){
            return false;
        }
        bool s1s2 =  checkOneToOne(s, t);
        bool s2s1 = checkOneToOne(t, s);

        return s1s2 && s2s1;

    }
};
int main()
{
    Solution obj;
    string s, t;
    cin  >> s >>t ;
    cout<<(obj.isIsomorphic(s, t)?"Yes":"No");
   return 0;
}