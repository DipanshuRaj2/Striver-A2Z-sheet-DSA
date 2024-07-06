#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int d){
        data = d;
        next = nullptr;
        int a=9;
    }
};
// it take more time compexity
Node* deleteMiddle(Node* head) {
        Node* temp = head;
        int cnt = 0; 
        while(temp != nullptr){
            cnt++;
            temp = temp -> next;
        }
        int res = cnt/2;
        temp = head;
          while(temp != nullptr){
            res--;
            if(res == 0){
                break;
            }
            temp = temp -> next;
        }
        Node* deleteNode = temp->next;
        temp -> next = temp -> next -> next;
        delete(deleteNode);
        return head;
        }


//using tortoise and hare approach
Node* deleteMiddle2(Node* head){
    Node* slow = head;
    Node* fast = head -> next -> next;

    while(fast != nullptr && fast -> next != nullptr){
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    Node* deleteNode = slow -> next;
    slow -> next = slow -> next -> next;
    delete(deleteNode);
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
    head -> next -> next -> next -> next = new Node(5);
    head -> next -> next -> next -> next -> next = new Node(6);
    head -> next -> next -> next -> next -> next -> next = new Node(7);
    // 1 -> 3 -> 4 -> 2 -> 5 -> 6 -> 7
    print(head);
    head = deleteMiddle2(head);
    print(head);
   return 0;
}