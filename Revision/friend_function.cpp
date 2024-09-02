// #include<iostream>
// using namespace std;
// class Ram{
//     int a; int b;
//    public:
//    Ram(){
//         a = 2;
//         b = 4;
//     }
//     friend void show(Ram r);
// };

// void show(Ram x){
//     cout<<x.a <<" "<<x.b;
// }
// int main(){
//     Ram r;
//     show(r);
// } // namespace std;



#include <bits/stdc++.h>
using namespace std;
class A{
    // method overloading
    public:
    int show(int a, int b){
        cout<<"A method: ";
        return a+b;
    }
    int show(int a, int b, int c){
        cout<<"A method 3 parameter: ";
        return a*b* c;
    }
};
class B:public A{
    public:
    int show1(int a, int b){
        cout<<"B method: ";
        return a+b;
    }
};
int main()
{
   B obj; 
  obj.show(1, 4);

    return 0;
}

