#include <bits/stdc++.h>
using namespace std;
string Dec2Bin(int num, int k){
    //brute force
    /*
    string str = "";
    while(num != 0){
        int ele = num % 2;
        str.push_back(ele + '0');
        num /= 2;
    }
    cout<<str<<endl;
    if(str[k] == '1'){
        return "true";
    }
    return "false";
    */
   // optimal approach
   int ele = 1 << k;
   if((num & (ele)) != 0){
    return "true";
   }
   return "false";
}
int main()
{

    cout<<Dec2Bin(4, 2);
    return 0;
}