#include <bits/stdc++.h>
using namespace std;
string convertToBinary(int n){
    string bin = "";
    while(n != 0){
        int ele = n % 2;
        bin.push_back(ele + '0');
        n /= 2;
    }
    reverse(bin.begin(), bin.end());
    return bin;
}
int minBitFlips(int start, int goal){
    string str1 = convertToBinary(start);
    string str2 = convertToBinary(goal);
    
    int n = max(str1.size(), str2.size());
    int m = min(str1.size(), str2.size());
    int paddingLength = n - m;

    if(str1.size() < str2.size()){
        str1 = string(paddingLength, '0') + str1;
    }
    else{
        str2 = string(paddingLength, '0') + str2;
    }
    int cnt = 0;
    int i = 0; int j = 0;
    while(i < str1.size() && j < str2.size()){
        if(str1[i] != str2[j]){
            cnt++;
            i++ , j++;
        }
        else{
            i++, j++;
        }
    }
    return cnt;
}
int main()
{
    cout<<minBitFlips(3, 4);
    return 0;
}