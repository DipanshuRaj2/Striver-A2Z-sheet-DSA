#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node* prev;

    Node(int data1, Node* next1, Node* prev1){
        data = data1;
        next = next1;
        prev = prev1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
        prev = nullptr;
    }
    Node(){
        next = nullptr;
        prev = nullptr;
    }
};
Node* convert2DLL(vector<int>arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;

    for(int i = 1; i<arr.size(); i++){
        Node* temp = new Node(arr[i], nullptr, prev);
        prev -> next = temp;
        prev = temp;
    }
    return head;
}
void print(Node* head){
    while(head != NULL){
        cout<<head ->data <<"-> ";
        head = head -> next;
    }
    cout<<endl;
}

Node* deleteTail(Node* head){
    if(head == NULL || head -> next == NULL){
        return NULL;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp ->  next;
    }

    Node* newNode = temp -> prev;
    newNode -> next = nullptr;
    temp -> prev = nullptr;
    delete temp;
    return head;
}
int main()
{
    vector<int>arr = {1,2,7,4, 9};
    Node* head = convert2DLL(arr);

    print(head);
    head = deleteTail(head);
    print(head);
   return 0;
}