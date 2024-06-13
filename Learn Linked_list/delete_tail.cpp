#include<bits/stdc++.h>
using namespace std;
struct Node{
    public:
    int data;
    Node* next;
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
Node* convert2LL(vector<int>arr){
    Node* head = new  Node(arr[0]);
    Node* mover = head;

    for(int i = 1;i<arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next =  temp;
        mover = mover->next;
    }
    return head;
}
void print(Node *head){
    while(head != nullptr){
        cout<<head->data<<" ";
        head = head->next;
    }
}

Node* deleteTail(Node* head){
    if(head == NULL || head->next == NULL){
        return NULL;
    }
    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    delete temp -> next;
    temp->next  =nullptr;

    return head;
}
int main()
{
    vector<int>arr ={3, 4, 5, 6};
    Node* head = convert2LL(arr);
    
    head = deleteTail(head);

    print(head);
  
   return 0;
}