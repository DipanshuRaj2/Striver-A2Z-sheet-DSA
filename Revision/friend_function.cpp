#include<iostream>
using namespace std;
class A{
    public:
   virtual void show() = 0;
//    virtual void show(){
//         cout<<"Base class"<<endl;
//     }
};
class B: public A{
    public:
    void show(){
        cout<<"child class"<<endl;
    }
};
int main(){
    A *bptr;
    B aa;
    bptr = &aa;
    bptr->show();
    return 0;
}
