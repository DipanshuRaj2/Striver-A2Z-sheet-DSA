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

Node* insertAfterHead(Node* head, int val){
    Node* newNode = new Node(val, head->next, head);
    
    head->next=newNode;
    return head;
}
Node* insertAfterTail(Node* head, int val){
    if(head == nullptr){
        return new Node(val);
    }
    Node* temp  = head;

    while(temp->next != nullptr){
        temp = temp -> next;
    }
    Node* newNode = new Node(val, nullptr, temp);
    temp->next = newNode;
    
    return head;
}
Node* insert_After_K_Position(Node* head, int k, int val){
    if(k == 1){
        return  insertAfterHead(head, val);
    }
    Node* temp = head;
    int cnt = 0;
    while(temp != NULL){
        cnt++;
        if(cnt == k) break;
        temp = temp -> next;
    }
    Node* front= temp -> next;

    Node* newNode = new Node(val, front, temp);

    if(front == nullptr){
        return insertAfterTail(head, val);
    }
    temp-> next = newNode;
    front -> prev = newNode;

    return head;

}
void print(Node* head){
    while(head != NULL){
        cout<<head ->data <<" <-> ";
        head = head -> next;
    }
    cout<<endl;
}
int main(){
    vector<int>arr = {1, 3, 4, 5};
    Node* head = convert2DLL(arr);
    print(head);
    head = insert_After_K_Position(head, 4, 100);
    print(head);
    return 0;
}