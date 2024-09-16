// #include <bits/stdc++.h>
// using namespace std;
// class stackImplement{
//     // int top = -1;
//     // int st[10];
//     // void push(int x){
//     //     if(top >= 10) cout<<"Overflow";
//     //     top = top + 1;
//     //     st[top] = x;
//     // }
//     // int top(){
//     //     if(top == -1) cout<<"underflow";
//     //     return st[top];
//     // }
//     // void pop(){
//     //     if(top == -1) cout<<"underflow";
//     //     top = top - 1;
//     // }
//     // int size(){
//     //     return top + 1;
//     // }
// };
// int main()
// {

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
class Stack{
    public: 
    int top = -1;
    int st[10];
    void push(int x){
        if(top >= 10) cout<<"overflow";
        top = top + 1;
        st[top] = x;
    }
    void pop(){
        if(top == -1) cout<<"underflow";
        top = top - 1;
    }
    int Top(){
        if(top == -1) cout<<"underflow";
        int x = st[top];
        return x;
    }
    int Size(){
        int x = top + 1;
        return x;
    }
};
int main()
{
    Stack st;
    st.push(10);
    st.push(12);
    st.push(5);
    cout<<"size of stack: "<<st.Size()<<endl;
    cout<<"Top element: "<<st.Top()<<endl;
    st.pop();
    cout<<"size of stack: "<<st.Size()<<endl;


    return 0;
}