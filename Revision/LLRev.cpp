#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int d){
        data  = d;
        next = nullptr;
    }  
};
Node* Convert2Arr(vector<int>&arr){
    Node* head = new Node (arr[0]);
    Node* temp = head;
    for(int i = 1; i<arr.size(); i++){
        Node* mover = new Node(arr[i]);
        temp -> next = mover;
        temp = mover;
    }
    return head;
}
/*
Node* reverseLL(Node* head){
    Node* back = nullptr;
    Node* temp = head;
    while(temp != nullptr){
        Node* front = temp -> next;
        temp -> next = back;
        back = temp;
        temp = front;
    }
    return back;
}
Node* addOne(Node* head){
   head =  reverseLL(head);
   Node* temp = head;
   int carry = 1;
   while(temp != nullptr){
    if(temp ->data < 9){
        temp -> data = temp -> data + carry;
        carry = 0;
    }
    else{
        temp -> data = 0;
        carry = 1;
    }
    temp = temp -> next;
   }
   if(carry == 1){
    Node* newNode = new Node(1);
    newNode -> next = head;
    head = newNode;
    return head;
   }
   head = reverseLL(head);
   return head;
}
*/
Node* addTwoNumbers(Node* l1, Node* l2) {
    Node* dummy = new Node(-1);
    Node* temp = dummy;
    Node* temp1 = l1;
    Node* temp2 = l2;
    int carry = 0;
    while(temp1 != nullptr || temp2 != nullptr){
        int sum = carry;
        if(temp1 != nullptr){
            sum = sum + temp1 -> data ;
        }
        if(temp2 != nullptr){
            sum = sum + temp2 -> data;
        }
        Node* newNode = new Node(sum%10);
        carry = sum/10;
        temp -> next = newNode;
        temp = temp -> next;
        if(temp1 != nullptr) temp1 = temp1 -> next;
        if(temp2 != nullptr) temp2 = temp2 -> next;
    }
    if(carry){
        Node *newNode = new Node(carry);
        temp -> next = newNode;
    }
    return dummy->next;
}

void print(Node* head){
    while(head != nullptr){
        cout<<head -> data<<"->";
        head = head -> next;
    }
    cout<<"nullptr";
    cout<<endl;
}

int main(){
    vector<int> arr = {9,9,9,8};
    vector<int>arr1 = {3, 2, 1};
    Node* head1 = Convert2Arr(arr);
    Node* head2 = Convert2Arr(arr1);
    print(head1);
    print(head2);
    Node* head = addTwoNumbers(head1, head2);
    print(head);
    return 0;
}