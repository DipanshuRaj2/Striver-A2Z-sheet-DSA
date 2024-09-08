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
    int n = 6;
    int data;
    cin >> data;
    Node* head = new Node(data);
    Node* temp = head;
    for(int i = 1; i<6; i++){
        int data;
        cin >> data;
        Node* mover = new Node(data);
        temp -> next = mover;
        temp = mover;
    }
   
    head = rotate(head, 2);
    print(head);
}
