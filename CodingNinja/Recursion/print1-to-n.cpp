// #include<bits/stdc++.h>
// using namespace std;
// int count = 1;
// void f1(int n){
//     cout << count <<endl;
//     count++;
//     f1(n);
// }
// int main()
// {
//     int n;
//     f1(n);
//    return 0;
// }
#include<bits/stdc++.h>
using namespace std;
void f1(int i , int n){
    if(i > n)
    return;
    cout<<"Dipanshu"<<endl;
    f1(i+1, n);
}
int main()
{
    f1(1, 3);
   return 0;
}