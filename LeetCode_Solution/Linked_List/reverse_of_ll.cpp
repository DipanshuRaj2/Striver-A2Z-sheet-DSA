// /*Given the head of a singly linked list, reverse the list, and return the reversed list.

 

// Example 1:


// Input: head = [1,2,3,4,5]
// Output: [5,4,3,2,1]
// Example 2:


// Input: head = [1,2]
// Output: [2,1]*/

// // it is brute force approach 
// #include<bits/stdc++.h>
// using namespace std;
// struct Node{
//     int data;
//     Node* next;

//     Node(int data1, Node* next1){
//         data = data1;
//         next = next1;
//     }
//     Node(int data1){
//         data = data1;
//         next = nullptr;
//     }
// };
// Node* reverseLL(Node* head){
//     stack<int>st;
//     Node* temp = head;
//     while(temp != nullptr){
//         st.push(temp-> data);
//         temp = temp -> next;
//     }
//     temp = head;
//     while(temp != nullptr){
//         temp->data = st.top();
        
//         st.pop();
//         temp = temp -> next;
//     }
//     return head;
// }
// void print(Node* head){
//     Node* temp = head;
//     while(temp != NULL){
//         cout<<temp -> data<<" -> ";
//         temp = temp -> next;
//     }
//     cout<<endl;
// }
// int main()
// {
//     Node* head = new Node(1);
//     head -> next = new Node(2);
//     head -> next -> next = new Node(3);
//     head -> next -> next -> next = new Node(4);
//     head -> next -> next -> next -> next = new Node(5);
//     print(head);
//     head = reverseLL(head);
//     print(head);
//    return 0;
// }
//2nd approach
//without using extra space


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
Node* reverseLL(Node* head){
    Node* temp = head; 
    Node* prev = nullptr;
    while(temp != nullptr){
        Node* front = temp->next;
        temp -> next = prev;
        prev = temp;
        temp = front;
    }
    return prev;
}
void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp -> data<<" -> ";
        temp = temp -> next;
    }
    cout<<endl;
}
int main()
{
    Node* head = new Node(1);
    head -> next = new Node(2);
    head -> next -> next = new Node(3);
    head -> next -> next -> next = new Node(4);
    head -> next -> next -> next -> next = new Node(5);
    print(head);
    head = reverseLL(head);
    print(head);
   return 0;
}


// using recursive approach
// #include<bits/stdc++.h>
// using namespace std;

// struct Node{
//     int data;
//     Node* next;

//     Node(int data1, Node* next1){
//         data = data1;
//         next = next1;
//     }
//     Node(int data1){
//         data = data1;
//         next = nullptr;
//     }
// };
// Node* reverseLL(Node* head){
//     if(head == NULL || head -> next == nullptr){
//         return head;
//     }
//     Node* newHead  = reverseLL(head->next);
//     Node* front = head -> next;
//     front -> next = head;
//     head -> next = nullptr;
//     return newHead;
// }
// void print(Node* head){
//     Node* temp = head;
//     while(temp != NULL){
//         cout<<temp -> data<<" -> ";
//         temp = temp -> next;
//     }
//     cout<<endl;
// }
// int main()
// {
//     Node* head = new Node(1);
//     head -> next = new Node(2);
//     head -> next -> next = new Node(3);
//     head -> next -> next -> next = new Node(4);
//     head -> next -> next -> next -> next = new Node(5);
//     print(head);
//     head = reverseLL(head);
//     print(head);
//    return 0;
// }
// //