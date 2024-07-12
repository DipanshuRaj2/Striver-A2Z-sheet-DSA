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
    cout<<endl;
}
Node* reverse(Node* head){
    Node* temp = head;
    Node* prev = nullptr;
    while(temp != nullptr){
        Node* front  = temp -> next;
        temp -> next = prev;
        prev = temp;
        temp = front;
    }
    return prev;
}
Node* Add1(Node* head){
    head = reverse(head);
    Node* temp = head;
    int carry = 1;
    while(temp != nullptr){
    temp -> data = temp -> data + carry;
    if(temp -> data < 10){
        carry = 0;
        break;
    }
    else{
        temp -> data = 0;
        carry = 1;
    }
    temp = temp -> next;
}

   if(carry == 1){
    Node* newNode = new Node(1);
    head = reverse(head); 
    newNode -> next = head;
    return newNode;  
   }

   head =  reverse(head);
   return head;
}
main()
{
    Node *head = new Node(9);
    head->next = new Node(9);
    head->next->next = new Node(8);
    head->next->next->next = new Node(9);
    print(head);
    cout<<endl;
    cout<<"Reverse Of Linked List: ";
    head =reverse(head);
    print(head);
    head = Add1(head);
    print(head);
    return 0;
}