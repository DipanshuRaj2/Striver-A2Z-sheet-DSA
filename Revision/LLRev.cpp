#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    
    Node(int d){
        data = d;
        next = nullptr;
    }
};
Node* rotate(Node* head, int k){
    Node* temp = head;
    int cnt = 0;
    Node* newHead = head;
    Node* temp1 = head;
    while(cnt!=k-1){
        temp = temp -> next;
        cnt++;
    }
    while(temp1 -> next != nullptr){
        temp1 = temp1 -> next;
    }

    // cout<<"temp: "<<temp1->data<<endl;
    newHead = temp -> next;
    temp -> next = nullptr;

    
    temp1 -> next = head;
    return newHead;
}
void print(Node* head){
    while(head != nullptr){
        cout<<head-> data<<" ";
        head = head-> next;
    }
}
int main(){
    Node* head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    head -> next -> next->next = new Node(40);
    head -> next -> next -> next -> next = new Node(50);
    head -> next -> next -> next -> next -> next = new Node(60);
   
    head = rotate(head, 2);
    print(head);
}
