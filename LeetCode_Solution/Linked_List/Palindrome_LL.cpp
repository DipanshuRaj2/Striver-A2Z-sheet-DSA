// brute force approach
// #include<bits/stdc++.h>
// using namespace std;
// struct Node{
//     int data;
//     Node* next;

//     Node(int data1){
//         data = data1;
//         next = nullptr;
//     }
// };
// bool palindromeLL(Node* head){
//     Node* temp = head;
//     stack<int>st;
//     while(temp !=  nullptr){
//         st.push(temp->data);
//         temp = temp -> next;
//     }
//     temp = head;
//     while(temp != nullptr){
//         if(st.top() != temp->data){
//             return false;
//         }
//         st.pop();
//         temp = temp -> next;
//     }
//     return true;
// }
// void print(Node* head){
//         while(head != nullptr){
//             cout << head -> data<<" ->";
//             head = head -> next;
//         }
// }
// int main()
// {
//     Node* head = new Node(1);
//     head->next = new Node(3);
//     head -> next -> next = new Node(3);
//     head -> next -> next -> next = new Node(1);
//     cout<<palindromeLL(head);
//    return 0;
// }


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
Node* reverseLinkedList(Node* head){
    Node* temp = head;
    Node* prev = nullptr;

    while(temp != nullptr){
        Node* front = temp -> next;
        temp -> next = prev;
        prev = temp;
        temp = front;
    }
    return prev;
}
bool palindromeLL(Node* head){
    if(head == nullptr || head -> next == NULL){
        return true;
    }
    Node* slow = head;
    Node* fast = head;

    while(fast -> next != nullptr && fast -> next -> next != nullptr){
        slow = slow -> next;
        fast = fast -> next -> next;
    }
   Node* newHead = reverseLinkedList(slow -> next);
   Node* first = head;
   Node* second = newHead;

   while(second != nullptr){
    if(first -> data != second -> data){
        reverseLinkedList(newHead);
        return false;
    }
    first = first -> next;
    second = second -> next;
   
   }
   reverseLinkedList(newHead);
   return true;
}
void print(Node* head){
    while(head != nullptr){
        cout << head ->data<<"->";
        head = head ->next;
    }
    cout<<endl;
}

int main()
{
    Node* head = new Node(1);
    head->next = new Node(3);
    head -> next -> next = new Node(4);
    head -> next -> next -> next = new Node(3);
    head -> next -> next -> next -> next = new Node(1);

    print(head);
    head = reverseLinkedList(head);
    print(head);
    if(palindromeLL(head)){
        cout<<"Given LL is a palindrome";
    }
    else{
        cout<<"Given LL is a not palindrome";
    }
   return 0;
}






















// insertion after head;
// #include<bits/stdc++.h>
// using namespace std;
// struct Node{
//     int data;
//     Node* next;

//     Node(int data1){
//         data = data1;
//         next = nullptr;
//     }
// };
// Node* insertAfterHead(Node* head, int data){
//     Node* temp = head->next;
//     Node* newNode = new Node(10);
//     head -> next  =newNode;
//     newNode -> next =temp;
//     return head;
// }
// void print(Node* head){
//     while(head != nullptr){
//         cout <<head -> data<<"->";
//         head = head -> next;
//     }
//     cout<<endl;
// }

// int main()
// {
//     Node* head = new Node(1);
//     head->next = new Node(3);
//     head -> next -> next = new Node(3);
//     head -> next -> next -> next = new Node(1);
//     print(head);
//     head = insertAfterHead(head, 10);
//     print(head);

// }