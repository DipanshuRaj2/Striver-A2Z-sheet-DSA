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
Node* convert2LL(vector<int>& arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i = 1; i<arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover -> next= temp;
        mover = mover->next;
    }
    return head;
}

Node* removeEle(Node* head, int ele){
    if(head == NULL){
        return head;
    }
    if(head->data == ele){
        Node *temp = head;
        head = head->next;
        delete(temp);
        return head;
    }
    Node* temp = head;
    Node* prev = NULL;

    while(temp!= NULL){
        if(temp->data == ele){
            prev->next = prev->next->next;
            delete(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}
void print(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}
int main()
{
    vector<int>arr = {1, 4, 5, 8, 9};
    Node* head = convert2LL(arr);
    head = removeEle(head, 8);
    print(head);

   return 0;
}