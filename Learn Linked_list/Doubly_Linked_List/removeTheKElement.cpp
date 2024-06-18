#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node* back;

    Node(int data1, Node* next1, Node* back1){
        data = data1;
        next = next1;
        back = back1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node* convert2DLL(vector<int>arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i = 1; i<arr.size(); i++){
        Node* temp = new Node(arr[i], nullptr, prev);
        prev -> next = temp;
        prev = temp;
    }
    return head;
}
void print(Node* head){
    while(head != NULL){
        cout<<head -> data<<"->";
        head = head -> next;
    }
    cout<<endl;
}
Node* deletehead(Node* head){
    Node* prev = head;
    head = head -> next;
    prev -> next = NULL;
    head -> back = NULL;
    delete prev;
    return head;
}
Node* deleteTail(Node* head){
    Node* temp = head;
    while(temp -> next != NULL){
        temp = temp->next;
    }
    Node* newNode = temp-> back;
    newNode->next = NULL;
    temp->next = NULL;
    return head;
}
Node* removeTheKElement(Node* head, int k){
    if(head == NULL){
        return NULL;
    }
    int cnt = 0;
    Node* KNode = head;
    while(KNode != NULL){
        cnt++;
        if(cnt == k){
            break;
        }
        KNode = KNode -> next;
    }
    Node* prev =  KNode -> back;
    Node* front = KNode -> next;
    
    if(prev == NULL && front == NULL){
        return NULL;
    }
    else if(prev == NULL){
        return deletehead(head);
    }
    else if(front == NULL){
        return deleteTail(head);
    }
    prev -> next = front;
    front -> back = prev;

    KNode -> next = nullptr;
    KNode -> back = nullptr;

    delete KNode;

    return head;
}
int main()
{
    vector<int>arr = {1, 2, 3, 7, 4};
    Node* head = convert2DLL(arr);
    print(head);
    head = removeTheKElement(head, 2);
    print(head);
   return 0;
}