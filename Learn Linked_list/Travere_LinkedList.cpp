#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    public:
    Node(int data1, Node* next1){
         data = data1;
         next = next1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
Node* traverse(vector<int>&arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i = 1; i<arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = mover->next;
    }
    return head;
}
int main()
{
    vector<int>arr = {2, 3, 4, 5};
    Node*head = traverse(arr);
    Node* temp = head;

    while(temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
   return 0;
}