#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int d){
        data = d;
        next = nullptr;
    }
};
Node* convert2LL(vector<int>&arr, Node* head){
    head = new Node(arr[0]);
    Node* temp = head;
    for(int i = 1;i<arr.size(); i++){
        Node* mover = new Node(arr[i]);
        temp -> next = mover;
        temp = mover;
    }
    return head;
}
void print(Node* head){
    while(head != nullptr){
        cout<<head -> data<<"->";
        head = head -> next;
    }
}
int main()
{
    Node* head = nullptr;
    vector<int>arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 20};
    head = convert2LL(arr,head);
    print(head);

    return 0;
}