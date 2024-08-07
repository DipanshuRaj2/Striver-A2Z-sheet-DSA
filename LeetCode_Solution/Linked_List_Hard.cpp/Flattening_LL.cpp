#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node * child;
    Node(int data1)
    {
        data = data1;
        next = nullptr;
        child = nullptr;
    }
};
Node* flatteningLL(Node* head){
    vector<int>arr;
    Node* temp = head;
    while(temp != nullptr){
        Node* t1 = temp;
        while(t1 != nullptr){
            arr.push_back(t1->data);
            t1 = t1 -> child;
        }
        temp = temp->next;
    }
    sort(arr.begin(), arr.end());
    for(int i = 0; i<arr.size(); i++){
        cout<<arr[i]<<", ";
    }
    cout<<endl;
    if(arr.size() == 0)return nullptr;
    head = new Node(arr[0]);
    temp = head;
    for(int i = 1; i<arr.size(); i++){
        Node* mover = new Node(arr[i]);
        temp -> next = mover;
        temp = mover;
    }
    return head;
}
void print(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout<<temp -> data<<"->";
        temp = temp -> next;
    }
    cout<<"nullptr";
    cout<<endl;
}
main()
{
    Node *head = new Node(1);
    head ->child = new Node(2);
    head ->child -> child = new Node(3);
    

    head->next = new Node(4);
    head -> next -> child  = new Node(5);
    head -> next -> child ->child  = new Node(6);


    head->next->next = new Node(7);
    head->next->next -> child = new Node(8);

    head->next->next->next = new Node(9);
    head->next->next->next->child = new Node(12);

    head->next->next->next->next = new Node(20);
    
    head = flatteningLL(head);
    print(head);


    return 0;
}