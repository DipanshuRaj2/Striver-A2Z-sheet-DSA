// #include<bits/stdc++.h>
// using namespace std;
// struct Node{
//     int data;
//     Node* next;

//     Node(int data1){
//         data = data1;
//         next = nullptr;
//     }
//     Node(int data1, Node* next1){
//         data = data1;
//         next = next1;
//     }
//     Node()
//     {
//         next=nullptr;
//     }
// };
// Node* convert2LL(vector<int>arr){
//     Node* head = new Node(arr[0]);
//     Node* mover = head;
//     for(int i = 1; i<arr.size(); i++){
//         Node* temp = new Node(arr[i]);
//         mover -> next = temp;
//         mover = mover -> next;
//     }
//     return head;
// }
// void print(Node* head){
//     while(head != NULL){
//         cout<<head ->data<<" ";
//         head = head -> next;
//     }
// }
// Node* insertPosition(Node* head, int ele, int k){
//     if(head == NULL){
//         if(k == 1){
//             return new Node(ele);
//         }
//         else{
//             return head;
//         }
//     }
//     if(k == 1){
//         return new Node(ele);
//         // Node* temp = new Node(val, head);
//         // return temp;
//     }
//     Node* temp = head;
//     int cnt = 0;
//     while(temp != NULL){
//         cnt++;
//         if(cnt == k-1){
//             Node* x = new Node(ele);
//             x -> next = temp->next;
//             temp -> next  = x;
//             break;
//         }
//         temp = temp -> next;
//     }
//     return head;
// }
// int main(){
//     vector<int> arr = {1, 3, 2, 4, 5};
//     Node* head = convert2LL(arr);
//     int ele = 100;
//     int k = 5;
//     head = insertPosition(head, ele, k);
//     print(head);
//     return 0;

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
    while(head  != NULL){
        cout<<head -> data<<" ";
        head = head-> next;
    }
}
Node* insertATLAST(Node* head, int ele){
    if(head == NULL){
        return new Node(ele);
    }
    Node* temp = head;

    while(temp != NULL){
        temp = temp->next;
    }
    Node* newNode = new Node(ele);
    temp ->next  = newNode;
    return head;
}
int main()
{
   Node* head = new Node(1);
   head->next = new Node(2);
   head -> next -> next = new Node(4);
   head -> next -> next -> next = new Node(3);

   head = insertATLAST(head, 100);
   print(head);
   return 0;
}