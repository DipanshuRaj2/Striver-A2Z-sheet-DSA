#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;

    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
bool palindromeLL(Node* head){
    Node* temp = head;
    stack<int>st;
    while(temp !=  nullptr){
        st.push(temp->data);
        temp = temp -> next;
    }
    temp = head;
    while(temp != nullptr){
        if(st.top() != temp->data){
            return false;
        }
        st.pop();
        temp = temp -> next;
    }
    return true;
}
 void print(Node* head){
        while(head != nullptr){
            cout << head -> data<<" ->";
            head = head -> next;
        }
}
int main()
{
    Node* head = new Node(1);
    head->next = new Node(3);
    head -> next -> next = new Node(3);
    head -> next -> next -> next = new Node(1);
    cout<<palindromeLL(head);
   return 0;
}