// #include<bits/stdc++.h>
// using namespace std;
// class A{
//     public:
//     char x;
//     char z;  //it is based on the clock cycle which is large sizeof that is the clock size
//     char y;
    
// };
// int main()
// {
//     A obj;
//     cout<<sizeof(obj);
//    return 0;
// }
// hello  how are you

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "9845";
    int res = 0;
    int i = 0;
    int len = s.length();

    while(i < len){
        int sin = s[i] - '0';
        res = res * 10 + sin;
        i++;
    }
    cout<< res;
   return 0;
}