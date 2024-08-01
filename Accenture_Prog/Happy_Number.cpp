#include <bits/stdc++.h>
using namespace std;
int modifyNumber(int n){
    int sum = 0; 
    while(n != 0){
        int num = num % 10;
        num = pow(num, 2);
        sum += num;
        n /= 10;
    }
    return sum;
}
bool Happy_Number(int n){
    unordered_set<int>st;
    st.insert(n);
    while(1){
        if(n == 1)return true;
        n = modifyNumber(n);
        if(st.find(n) != st.end())return false;
        st.insert(n);
    }
    return false;
}
int main()
{
    int n = 2;
    cout<<Happy_Number(n);
    return 0;
}