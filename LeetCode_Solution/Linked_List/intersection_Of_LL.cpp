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
/**
 1st approach
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
*/
// it taking extra space which we use unordered set

//2nd approach
/*
Node* collisionPoint(Node* t1, Node* t2, int d){

    //head 2 is bigger so we reach at the same node of both liked list
    while(d != 0){
        d--;
         t2 = t2 -> next;
    }
    while(t1 != t2){
        t1 = t1 -> next;
        t2 = t2 -> next;
    }
    return t1;
}
Node* intersectionPresent(Node* head1, Node* head2){
    Node* t1 = head1;
    int n1 = 0;
    
    while(t1 != nullptr){
        n1++;
        t1 = t1 -> next;
    }

    Node* t2 = head2;
    int n2 = 0;

    while(t2 != nullptr){
        n2++;
        t2 = t2 -> next;
    }
    if(n1 < n2){
        return collisionPoint(head1, head2, n2 - n1);
    }
    else{
        return collisionPoint(head2, head1, n1 - n2);
    }
}
*/
//3rd approach
Node* intersectionPresent(Node* head1, Node* head2){
    Node* temp1 = head1;
    Node* temp2 = head2;

    while(temp1 != temp2){
        if(temp1 == temp2) return temp1;
        temp1 = temp1 -> next;
        temp2 = temp2 -> next;
        if(temp1 == nullptr) temp1 = head2;
        if(temp2 == nullptr) temp2 = head1;
    }
    return temp1;
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