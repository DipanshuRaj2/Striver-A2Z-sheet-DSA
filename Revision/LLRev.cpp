#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        data = d;
        next = nullptr;
    }
};
Node* convert2LL(vector<int>&arr){
    Node* head = new Node(arr[0]);
    Node* temp = head;
    for(int i = 1; i<arr.size(); i++){
        Node* newNode = new Node(arr[i]);
        temp -> next = newNode;
        temp = newNode;
    }
    return head;
}
void print(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout<<temp->data<<"->";
        temp = temp -> next;
    }
    cout<<"nullptr";
}
int main(){
    vector<int>arr = {1,2,3,4,5};
    Node* head = convert2LL(arr);
    print(head);
}