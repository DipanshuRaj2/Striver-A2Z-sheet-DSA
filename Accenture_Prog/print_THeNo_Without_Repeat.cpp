#include<bits/stdc++.h>
#include<string>
using namespace std;
bool check(int &num1){
    string num = to_string(num1);
    set<char>st;
    for(char ch: num){
        if(st.find(ch) != st.end()){
            return false;
        }
        st.insert(ch);
    }
    return true;
}
void printNum(int n, int m){
    for(int i = n; i<=m; i++){
        if(check(i)){
            cout<<i<<" ";
        }
    }
}
int main(){
    int n , m;
    cin >> n >> m;
   printNum(n, m);
} 