// in 1st complement all the bits all the flip to 0 to 1 
// Example = 101101 
//1st complement  = 010010
#include <bits/stdc++.h>
using namespace std;
void firstComplement(string str){
    int i = 0;
    while(i<str.size()){
        if(str[i] == '1'){
            str[i] = '0';
        }
        else str[i] = '1';
        i++;
    }
    cout<<str;
}
int main()
{
    firstComplement("101101");

    return 0;
}