/*237. Delete Node in a Linked List
Solved
Medium
Topics
Companies
There is a singly-linked list head and we want to delete a node node in it.

You are given the node to be deleted node. You will not be given access to the first node of head.

All the values of the linked list are unique, and it is guaranteed that the given node node is not the last node in the linked list.

Delete the given node. Note that by deleting the node, we do not mean removing it from memory. We mean:

The value of the given node should not exist in the linked list.
The number of nodes in the linked list should decrease by one.
All the values before node should be in the same order.
All the values after node should be in the same order.
Custom testing:

For the input, you should provide the entire linked list head and the node to be given node. node should not be the last node of the list and should be an actual node in the list.
We will build the linked list and pass the node to your function.
The output will be the entire list after calling your function.
Input: head = [4,5,1,9], node = 5
Output: [4,1,9]
head = [4,5,1,9], node = 1
Output: [4,5,9]*/
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

void print(Node* head){
    while(head != NULL){
        cout<<head ->data<<" ";
        head = head -> next;
    }
}
// public:
    void deleteNode(Node* node) {
        Node * prev = NULL;

        while(node != NULL && node ->next!= NULL){
            node -> data = node->next->data;
            prev = node;
            node = node ->next;
        }
        prev -> next = NULL;
        delete(node);
    }

int main()
{
    vector<int>arr = {4, 5, 1, 9}; 
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head -> next -> next -> next = new Node(6);
    deleteNode(head->next->next);


    print(head);
   return 0;
}