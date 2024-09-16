#include <bits/stdc++.h>
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
class Queue{
    public:
    int size = 0;
    Node* start = nullptr; // for pop_operation
    Node* end = nullptr; // for push_operation

    void push(int x){
        Node* temp = new Node(x);
        if(start == nullptr){ // if there is no node in the linked list then whatever the node we insert is the answer
            start = end = temp;
        }
        else{                 // the node is present 
            end -> next = temp;
            end = end -> next;
        }
        size += 1;
    }
    void pop(){
        if(start == nullptr){
            cout<<"underflow";
        }

        Node* temp = start;
        start = start -> next;
        // temp -> next = nullptr;
        delete(temp);

        size -= 1; 
    }
    int front(){
        if(start == nullptr) cout<<"underflow";
        return start -> data;
    }
    int Size(){
        return size;
    }
};
int main()
{
    Queue qe;
    qe.push(10);
    qe.push(20);
    qe.push(30);
    qe.push(40);
    cout<<"Size of queue: "<<qe.Size()<<endl;
    cout<<"front of queue: "<<qe.front()<<endl;
    qe.pop();
    qe.pop();
    cout<<"Size of queue: "<<qe.Size()<<endl;
    cout<<"front of queue: "<<qe.front()<<endl;
    return 0;
}