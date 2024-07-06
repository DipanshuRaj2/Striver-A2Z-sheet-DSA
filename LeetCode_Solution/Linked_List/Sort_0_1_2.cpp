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
void print(Node* head){
    while(head != nullptr){
        cout<<head -> data<<"->";
        head = head -> next;
    }
    cout<<endl;
}
Node* sort0_1_2(Node* head){
    int cnt0 = 0;
    int cnt1 = 0;
    int cnt2 = 0;
    Node* temp = head;
    while(temp != nullptr){
        if(temp->data == 0){
            cnt0++;
        }
        if(temp -> data == 1){
            cnt1++;
        }
        if(temp -> data == 2){
            cnt2++;
        }
        temp = temp -> next;
    }
    temp = head;
    while(temp != nullptr){
        if(cnt0 != 0){
            temp->data = 0;
            cnt0--;
        }
        else if(cnt1 != 0){
            temp -> data = 1;
            cnt1--;
        }
        else{
            temp->data = 2;
        }
        temp = temp -> next;
    }
    return head;
}

int main()
{
    Node* head = new Node(1);
    head -> next = new Node(0);
    head -> next -> next = new Node(2);
    head -> next -> next -> next = new Node(0);
    head -> next -> next -> next -> next = new Node(2);
    head -> next -> next -> next -> next -> next = new Node(0);
    head -> next -> next -> next -> next -> next -> next = new Node(1);
    print(head);
    head = sort0_1_2(head);
    print(head);
   return 0;
}