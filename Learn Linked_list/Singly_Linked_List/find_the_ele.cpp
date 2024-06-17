#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* next;

    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
Node* convert2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i = 1; i<arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = mover->next;
    }
    return head;
}
int findOccurence(Node* head, int key){
    Node* temp = head;
    while(temp!= nullptr){
        if(temp->data == key){
            return 1;
        }
        temp = temp->next;
    }
    return 0;
}

int main()
{
    vector<int>arr = {2, 7, 3, 4, 6};
    int key = 123;
    Node*head = convert2LL(arr);
    cout<<findOccurence(head, key);
   return 0;
}