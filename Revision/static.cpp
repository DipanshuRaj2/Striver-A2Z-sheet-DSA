#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        next = nullptr;
    }
};
void print(Node* head){
    Node* temp = head;
    while(temp!= nullptr){
        cout<<temp->data<<"->";
        temp = temp -> next;
    }
    cout<<endl;
}
Node* convert2LL(vector<int>arr){
    Node* head = new Node(arr[0]);
    Node* temp = head;
    for(int i = 1; i<arr.size(); i++){
        Node* mover = new Node(arr[i]);
        temp->next = mover;
        mover = temp;
        temp = temp -> next;
    }
    return head;
}
Node* Reverse(Node* head){
    Node* temp = head;
    stack<Node*> st;
    while(temp!= nullptr){
        st.push(temp);
        temp = temp-> next;
    }
    head = new Node(st.top()->data);
    temp = head;
    st.pop();
    while(!st.empty()){
        Node* newNode = new Node(st.top()->data);
        temp -> next = newNode;
        temp = temp->next;
        st.pop();
    }
    return head;
}
Node* newReverse(Node* head){
    Node* prev = nullptr;
    Node* temp = head;
    while(temp != nullptr){
    Node * front = temp->next;
    temp -> next = prev;
    prev = temp;
    temp = front;
    }
    return prev;
}
int main(){
   vector<int>arr = {1, 2,3,4,5};
   Node* head = convert2LL(arr);
   print(head);
//    head = Reverse(head);
//    cout<<"Use Extra space: ";
//    print(head);

   head = newReverse(head);
   cout<<"Without Extra Space: ";
   print(head);
}