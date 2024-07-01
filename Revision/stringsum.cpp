#include<bits/stdc++.h>
using namespace std;
int stringsum(string s){
    int sum = 0; 
    for(int i = 0; i<s.length(); i++){
        int charSum = s[i] - 'a' + 1;
        sum += charSum;
    }
    return sum;
}
int main()
{
    string s = "aba";
    cout<<stringsum(s);
    
   return 0;
}