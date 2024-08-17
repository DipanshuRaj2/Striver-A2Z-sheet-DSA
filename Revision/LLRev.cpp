#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* next;

    Node(int d){
        data = d;
        next = nullptr;
    }
};
Node* reverse(Node* head){
    Node* prev = nullptr;
    Node* temp = head;
    while(temp != nullptr){
        Node* front = temp->next;
        temp -> next = prev;
        prev = temp;
        temp = front;
    }
    return prev;
}

Node* convert2Arr(vector<int>&arr, Node* head){
    Node* newHead = new Node(arr[0]);
    Node* temp = newHead;
    for(int i = 1; i<arr.size(); i++){
        Node* mover = new Node(arr[i]);
        temp -> next = mover;
        temp = mover;
    }
    return newHead;
}
void print(Node* head){
    while(head != nullptr){
        cout<<head -> data<<"->";
        head = head -> next;
    }
    cout<<"null";
    cout<<endl;
}

int main()
{
    vector<int>arr ={6, 2, 5, 4};
    Node* head = nullptr;
    head = convert2Arr(arr, head);
    print(head);
    head = reverse(head);
    print(head);
    return 0;
}