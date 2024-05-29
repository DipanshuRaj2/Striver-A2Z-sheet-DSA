// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
// public:
//     bool rotateString(string s, string goal) {
//         if(s.length() != goal.length()){
//             return false;
//         }
//         string temp=s+s;

//         // if(temp.find(goal)== -1){  // if(temp.find(goal) :: string npos){}
//         //     return false;
//         // }
//         if(temp.find(goal) == string::npos){
//             return false;
//         }
//         else{
//             return true;
//         }
//     }
// };
// int main()
// {
//     Solution sol;
//     string s = "Dipa";
//     string goal = "aDip";
//     cout<<sol.rotateString(s,goal);
//    return 0;
// }

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.length();

        for(int i = 0; i<n; i++){
            string rotated = s.substr(i) + s.substr(0, i);
            if(rotated == goal) return true;
        }
        return false;
    }
};
int main()
{
    Solution sol;
    string s = "Dipa";
    string goal = "aDip";
    cout<<sol.rotateString(s,goal);
   return 0;
}