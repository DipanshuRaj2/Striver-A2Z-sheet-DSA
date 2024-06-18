#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node* back;

    Node(int data1, Node* next1, Node* back1){
        data = data1;
        next = next1;
        back = back1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
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
        cout<<head -> data<<"->";
        head = head -> next;
    }
    cout<<endl;
}
void deleteNode(Node* temp){
    Node* prev = temp -> back;
    Node* forwad = temp -> next;

    if(forwad == NULL){
        prev -> next = nullptr;
        temp -> back = nullptr;
        delete temp;
        return;
    }
    prev -> next = forwad;
    forwad -> back = prev;
    delete temp;

    temp -> next = nullptr;
    temp -> back = nullptr;
    delete temp;
}
int main(){
    vector<int>arr = {1, 2, 4, 6};
    Node* head = convert2DLL(arr);
    print(head);

    deleteNode(head->next->next->next);
    print(head);
}