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
// Node* convert2LL(vector<int> &arr){
//     Node* head = new Node(arr[0]);
//     Node* mover = head;

//     for(int i = 1; i<arr.size(); i++){
//         Node* temp = new Node(arr[i]);
//         mover->next = temp;
//         mover = mover->next;
//     }
//     return head;
// }
// void print(Node* head){
//     while(head != NULL){
//         cout<<head ->data<<" ";
//         head = head -> next;
//     }
// }
// Node* insertNodeAtHead(Node* head, int val){
//     Node* temp = new Node(val, head);
//     return temp;
// }

// int main()
// {
//     vector<int>arr = {12, 5, 8, 7};
//     Node* head = convert2LL(arr);
//     head = insertNodeAtHead(head, 100);
//     print(head);
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

void print(Node* head){
    while(head != NULL){
        cout<<head ->data<<" ";
        head = head -> next;
    }
}

int main()
{
   
    Node* head = new Node(1);
    head -> next = new Node(3);
    head -> next -> next = new Node(6);
    head -> next -> next -> next = new Node(8);
    
    int val = 10;
    Node* temp = new Node(val);
    temp-> next = head;
    head = temp;
    print(head);
   return 0;
}