#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;

    Node(int d)
    {
        data = d;
        next = nullptr;
        
    }
};
Node *convert2DLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        prev->next = temp;
    
        prev = temp;
    }
    return head;
}
void print(Node *head)
{
    while (head != nullptr)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout<<"null";
    cout<<endl;
}
Node* Reverse(Node* head){
    Node* temp = head;
    Node* prev = nullptr;
    while(temp != nullptr){
        Node* nextNode = temp -> next;
        temp -> next = prev;
        prev = temp;
        temp = nextNode;
    }
    return prev;
}
Node* findKthNode(Node* temp, int k){
    
    k = k - 1;
    while(temp != nullptr && k > 0){
        k--;
        temp = temp->next;
    } 
    return temp;
}
Node* ReverseKGroup(Node* head, int k){
    Node* temp = head;
    Node* prevNode = nullptr;
    
    while(temp != nullptr){
        Node* kthNode = findKthNode(temp, k);
        if(kthNode == nullptr){
            if(prevNode) prevNode -> next = temp;
            break;
        }
        Node* nextNode = kthNode -> next;
        kthNode -> next = nullptr;
        Reverse(temp);

        if(temp == head){
            head = kthNode;
        }
        else{
            prevNode -> next = kthNode;
        }
        prevNode = temp;
        temp = nextNode;
    }
    return head;
}
int main()
{
    vector<int> arr = {1, 4, 15, 12, 6, 7, 8, 9};
    Node *head = convert2DLL(arr);
    print(head);
    head = ReverseKGroup(head , 3);
    print(head);
    return 0;
}