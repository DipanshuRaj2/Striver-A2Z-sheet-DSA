#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;

    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
Node* convert2LL(vector<int>arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i = 1; i<arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next=temp;
        mover = mover->next;
    }
    return head;
}

Node* deletehead(Node* head){
    Node* temp = head;
    head = head->next;

    return head;
}
int main()
{
    vector<int>arr = {2, 3, 4, 5, 6};
    Node* head = convert2LL(arr);

    Node* newHead = deletehead(head);
    
    Node* temp = newHead;

    while(temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
   return 0;
}