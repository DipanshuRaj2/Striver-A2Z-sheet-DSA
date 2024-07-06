#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;

    Node(int d){
        data = d;
        next = nullptr;
        
    }
};
void insertNode(Node*& head, int data){
    Node* newNode = new Node(data);
    if(head == nullptr){
        head = newNode;
        return;
    }
    Node* temp = head;
    while(temp -> next != nullptr){
        temp = temp -> next;
    }
    temp ->next = newNode;
    
}
Node* intersectionPresent(Node* head1, Node* head2){
    unordered_map<Node*, int>ump;
    Node* temp = head1;
    while(temp != nullptr){
        ump[temp] = 1;
        temp = temp -> next;
    }
    while(head2 != nullptr){
        if(ump.find(head2) != ump.end()){
            return head2;
        }
        head2 = head2 -> next;
    }
    return nullptr;
}
void print(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout<<temp -> data<<"->";
        temp = temp -> next;
    }
    cout<<endl;
}
int main()
{
    Node* head = nullptr;
    insertNode(head, 1);
    insertNode(head, 3);
    insertNode(head, 1);
    insertNode(head, 2);
    insertNode(head, 4);

    Node* head1 = head;
    head = head -> next -> next -> next;
    
    Node* headSec = NULL;
    insertNode(headSec, 3);
    Node* head2 = headSec;
    headSec -> next = head;


    cout <<"List1: ";
     print(head1);
    cout <<"List2: "; 
    print(head2);
    Node* answerNode = intersectionPresent(head1, head2);
    if(answerNode == NULL){
        cout<<"No intersection\n";
    }
    else{
        cout<<"The intersection point is "<<answerNode->data<<endl;
    }
   return 0;
}