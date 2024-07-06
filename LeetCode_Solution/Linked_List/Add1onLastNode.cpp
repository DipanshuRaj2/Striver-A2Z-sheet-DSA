#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

void print(Node* head){
    Node* temp = head;

    while(temp != nullptr){
        cout<<temp -> data<<"->";
        temp = temp -> next;
    }
}
void add1(Node* head){
    Node* temp = head;
    while(temp -> next != nullptr){
        temp = temp -> next;
    }
    int data = temp -> data +1;
    Node * newNode = 
}
main()
{
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    print(head);
    cout<<endl;
    add1(head);
    return 0;
}