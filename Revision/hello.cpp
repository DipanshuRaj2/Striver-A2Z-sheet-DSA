#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "abcde";
    for(int i = 0; i<s.length(); i++){
        cout<<s.substr(i)+ s.substr(0, i)<<"\n";
    }
    return 0;
}