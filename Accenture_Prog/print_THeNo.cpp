#include<bits/stdc++.h>
#include<string>
using namespace std;
bool check(int &num1){
      int num = num1;
      string ans = "";
    while(num != 0){
      int ele = num % 10;
      ans = ans + to_string(ele);
      num = num /10;
    }
    int ans1 = stoi(ans);
    if(ans1 == num1){
        return false;
    }
    return true;
}
void printNum(int n, int m){
    for(int i = 0; i<n; i++){
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