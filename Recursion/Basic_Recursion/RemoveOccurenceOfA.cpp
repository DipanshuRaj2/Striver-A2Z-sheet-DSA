// doing iteratively and without using extra spaces
// #include <bits/stdc++.h>
// using namespace std;
// string removeOfa(string str){
// //    str.erase(remove(str.begin(), str.end(), 'a'), str.end());
// //    str.erase(remove(str.begin(), str.end(), 'a'), str.end());
// for(int i = 0; i<str.length(); i++){
//     if(str[i]=='a'){
//         str.erase(i, 1);
//         i--;
//     }
// }
//     return str;
// }
// int main()
// {
//     string str = "abcax";
//     str = removeOfa(str);
//     cout<<str;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
string removeOfa(string &str, int idx, int n)
{
    // base case
    if (idx == n)
        return "";

    string curr = "";

    curr = curr +  str[idx];
    if (str[idx] == 'a'){
        return "" + removeOfa(str, idx+1, n);
    }
    else{
        return curr + removeOfa(str, idx+1, n);
    } 
}
int main()
{
    string str = "abacx";
    str = removeOfa(str, 0, str.size());
    cout<<str;
    return 0;
}