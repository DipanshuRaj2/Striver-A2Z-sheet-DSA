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
Node* removeNthNode(Node* head, int n){
    if(head == nullptr || head -> next == nullptr){
        return nullptr;
    }
    Node* temp = head;
    int cnt = 0;
    while(temp != nullptr){
        cnt++;
        temp = temp -> next;
    }
    if(cnt == n){
       Node* newNode = head->next;
       delete(head);
       return newNode ;
    }
    int res = cnt - n; 
    temp = head;
    while(temp != nullptr){
        res--;
        if(res == 0){
            break;
        }
        temp = temp -> next;
    }
    Node* delNode = temp -> next;
    temp -> next = temp -> next -> next;
    delete(delNode);
    return head;
}
void print(Node* head){
    while(head != nullptr){
        cout<<head -> data<<"->";
        head = head -> next;
    }
    cout<<endl;
}
int main()
{
    Node* head = new Node(1);
    head -> next = new Node(3);
    head -> next -> next = new Node(4);
    head -> next -> next -> next = new Node(2);
    head -> next -> next -> next -> next = new Node(5);
    head -> next -> next -> next -> next -> next = new Node(6);
    head -> next -> next -> next -> next -> next -> next = new Node(7);
    // 1 -> 3 -> 4 -> 2 -> 5 -> 6 -> 7
    print(head);
    head = removeNthNode(head, 4);
    print(head);
   return 0;
 
}