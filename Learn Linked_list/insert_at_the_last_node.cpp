#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;

    Node(int data1){
        data = data1;
        next = nullptr;
    }
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
    Node()
    {
        next=nullptr;
    }
};
Node* convert2LL(vector<int>arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1; i<arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover -> next = temp;
        mover = mover -> next;
    }
    return head;
}
void print(Node* head){
    while(head != NULL){
        cout<<head ->data<<" ";
        head = head -> next;
    }
}
Node* insertAttail(Node* head, int val){
    if(head == NULL){
        return new Node(val);
    }
    Node* temp = head;

    while(temp->next !=  NULL){
        temp = temp -> next;
    }
    Node* newNode = new Node(val);

    temp->next = newNode;

    return head;
}
int main()
{
    vector<int>arr = {1, 3, 4, 8};


    Node* head = convert2LL(arr);
    Node* check = nullptr;
    
    
    check = insertAttail(check, 100);
    head = insertAttail(head, 100);
    print(head);
   return 0;
}