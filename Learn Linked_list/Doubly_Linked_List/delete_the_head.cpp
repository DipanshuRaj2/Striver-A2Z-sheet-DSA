#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node *back;

    Node(int data1, Node *next1, Node *back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }
    Node(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
    Node()
    {
        next = nullptr;
        back = nullptr;
    }
};
Node *convert2Dll(vector<int>arr)
{
    Node *head = new Node(arr[0]);
    Node *prev = head;

    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}
void print(Node* head){
    while(head != nullptr){
        cout<<head -> data<<" ";
        head = head -> next;
    }
    cout<<endl;
}
Node* deleteHead(Node* head){
    if(head == NULL || head -> next == NULL){
        return NULL;
    }
    Node* prev = head;
    head = head -> next;

    head -> back = nullptr;
    prev -> next = nullptr;
    delete prev;
    return head;
}
int main()
{
    vector<int>arr = {2};
    Node* head = convert2Dll(arr);
    print(head);
    head = deleteHead(head);
    print(head);
    return 0;
}