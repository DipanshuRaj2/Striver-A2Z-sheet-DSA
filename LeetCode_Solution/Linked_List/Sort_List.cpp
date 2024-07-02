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
Node* sortLL(Node* head){
    if(head == nullptr || head -> next == nullptr){
        return head;
    }
    Node* temp = head;
    vector<int>arr;
    while(temp != nullptr){
        arr.push_back(temp->data);
        temp = temp -> next;
    }
    sort(arr.begin(), arr.end());
    int i = 0;
    temp = head;
    while(temp != nullptr){
        temp -> data = arr[i];
        i++;
        temp = temp -> next;
    }
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
    head -> next -> next -> next -> next = new Node(7);
    head -> next -> next -> next -> next -> next = new Node(5);
    head -> next -> next -> next -> next -> next -> next = new Node(4);
    // 1 -> 3 -> 4 -> 2 -> 7 -> 5 -> 4
    print(head);
    head = sortLL(head);
    print(head);
   return 0;
 
}