#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;

    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
Node* convert2LL(vector<int>arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i = 1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover -> next = temp;
        mover = mover -> next;
    }
    return head;
}
int countLinklist(Node* head){
    int count = 0;
    Node* temp = head;
    while(temp!= nullptr){
        temp = temp->next;
        count++;
    }
    return count;
}

int main()
{
    vector<int>arr = {2, 3, 4, 5};

    Node* head = convert2LL(arr);
    cout<<countLinklist(head);
   return 0;
}