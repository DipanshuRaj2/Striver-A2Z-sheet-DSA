#include<bits/stdc++.h>
using namespace std;
struct Node{
    public:
    int data;
    Node* next;

    Node(int data1){
        data = data1;
        next = nullptr;
    } 
};
Node* convert2LL(vector<int>arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i = 1; i<arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover -> next = temp;
        mover = mover -> next;
    }
    return head;
}
void printLL(Node* head){
    while(head != NULL){
        cout << head ->data<<" ";
        head = head->next;
    }
}
Node* removeK(Node* head, int k){
    if(head == NULL){
        return head;
    }
    if(k==1){
        Node* temp = head;
        head = head ->next;
        delete(temp);
        return head;
    }

    int cnt = 0;

    Node* temp = head;
    Node* prev = NULL;
    while(temp != NULL){
        cnt++;
        if(cnt == k){
            prev-> next = prev->next->next;
            delete(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}
int main()
{
    vector<int>arr = {2, 4, 5, 3};
    int k = 3;
    Node* head = convert2LL(arr);
    head = removeK(head, k);
    printLL(head);
   return 0;
}