#include<bits/stdc++.h>
using namespace std;
string leftRotate(string str, int d) {
    // Write your code here.
    string ans = "";
    int n = str.length();
    d = d % n;
    for(int i = d; i<n; i++){
        ans.push_back(str[i]);
    }
    for(int i = 0; i<d; i++){
        ans.push_back(str[i]);
    }
    return ans;
}
string rightRotate(string str, int d) {
    // Write your code here.
    string ans = "";
    int n = str.length();
    d = d%n;
    for(int i = n-d; i<n; i++){
        ans.push_back(str[i]);
    }
    for(int i = 0; i<n-d; i++){
        ans.push_back(str[i]);
    }
    return ans;
}
int main()
{
    string str = "codingninjas";
    int d = 2;
    cout<< leftRotate(str, d)<<endl;
    cout<< rightRotate(str, d);
   return 0;
}