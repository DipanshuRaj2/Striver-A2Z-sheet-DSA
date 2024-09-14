#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        data = d;
        next = nullptr;
    }
};
class Stack{
    public:
    int size = 0;
    Node* top = nullptr;
    void push(int x){
        Node* temp = new Node(x);
        temp -> next = top;
        top = temp;
        size = size + 1;
    }
    void pop(){
        Node* temp = top;
        top = top -> next;
        delete(temp);
        size = size - 1;
    }
    int Top(){
        return top -> data;
    }
    int Size(){
        return size;
    }
};

int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout<<"Stack Size: "<<st.Size()<<endl;
    cout<<"top of Stack: "<<st.Top()<<endl;
    st.pop();
    st.pop();
    cout<<"size of element after pop out the stack: "<<st.Size()<<endl;
    cout<<"top of Stack:  "<<st.Top()<<endl;

 return 0;
 }