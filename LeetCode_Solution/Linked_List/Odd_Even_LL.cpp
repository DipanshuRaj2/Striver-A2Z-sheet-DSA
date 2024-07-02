// //brute force code
// #include<bits/stdc++.h>
// using namespace std;
// struct Node{
//     int data;
//     Node* next;

//     Node(int d){
//         data = d;
//         next = nullptr;
        
//     }
// };
// Node* arrangeOddEvenLL(Node* head){
//     if(head == nullptr || head -> next == nullptr){
//         return head;
//     }
//     Node* temp = head;
//     vector<int>arr;
//     while(temp!= nullptr && temp -> next!= nullptr){
//         arr.push_back(temp->data);
//         temp = temp -> next -> next;
//     }
//     if(temp!=nullptr){
//         arr.push_back(temp->data);
//     }

//     temp = head -> next;
//     while(temp != nullptr && temp -> next != nullptr){
//         arr.push_back(temp->data);
//         temp = temp -> next -> next;
//     }
//     if(temp != nullptr){
//         arr.push_back(temp -> data);
//     }
//     temp = head;
//     int i = 0; 
//     while(temp != nullptr){
//         temp -> data = arr[i];
//         i++;
//         temp = temp-> next;
//     }
//     return head;
// }
// void print(Node* head){
//     while(head != nullptr){
//         cout<<head -> data<<"->";
//         head = head -> next;
//     }
//     cout<<endl;
// }
// int main()
// {
//     Node* head = new Node(1);
//     head -> next = new Node(3);
//     head -> next -> next = new Node(4);
//     head -> next -> next -> next = new Node(2);
//     head -> next -> next -> next -> next = new Node(5);
//     head -> next -> next -> next -> next -> next = new Node(6);
//     head -> next -> next -> next -> next -> next -> next = new Node(7);
//     // 1 -> 3 -> 4 -> 2 -> 5 -> 6 -> 7
//     print(head);
//     head = arrangeOddEvenLL(head);
//     print(head);
//    return 0;
// }


//optimal approach 
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
Node* arrangeOddEvenLL(Node* head){
    if(head == nullptr || head -> next == nullptr){
        return head;
    }
    Node* odd = head;
    Node* even = head -> next;
    Node* evenNode = head -> next;
    while(even != nullptr && even -> next != nullptr){
        odd -> next= odd -> next -> next;
        even -> next = even -> next -> next;

        odd = odd -> next;
        even = even -> next;
    }
    odd -> next = evenNode;
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
    head = arrangeOddEvenLL(head);
    print(head);
   return 0;
 
}