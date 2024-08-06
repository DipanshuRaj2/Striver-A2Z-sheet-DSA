// in this type2 there is no distinct charcacter in the word;
#include <bits/stdc++.h>
using namespace std;
bool comparator(int a, int b){
    return a > b;
}
int minimumPushes(string &str){
    vector<int>vp(26, 0);
    for(char &ch: str){
        vp[ch - 'a']++;
    }
    
    sort(vp.begin(), vp.end(), comparator);
    for(int i = 0; i<26; i++){
        cout<<vp[i]<<" ";
    }
    int result = 0;
    for(int i = 0; i<26; i++){
        int freq = vp[i];
        int press = i/8 + 1;
        result = result + press * freq;
    }
    cout<<endl;
    return result;
}
int main()
{
    string str = "xyzxyzxyzxyz";
    cout<<minimumPushes(str);
    return 0;
}