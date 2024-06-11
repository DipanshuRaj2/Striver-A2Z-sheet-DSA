#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
Node* convertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    cout<<"Address of header "<<head<<endl;
    for(int i = 1; i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
int countOfLinkedList(Node* head){
    int cnt = 0;
    Node* temp = head;

    while(temp){
        temp = temp->next;
        cnt++;
    }
    return cnt;
}
int main()
{
    vector<int>arr = {2,5,8,7};
    Node* head = convertArr2LL(arr);

    Node* temp = head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;

    cout << countOfLinkedList(head);
   return 0;
}