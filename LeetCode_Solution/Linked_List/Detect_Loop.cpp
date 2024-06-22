#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;

    Node(int data1){
        data = data1;
        next = nullptr;
    }
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
};
// this code take extra time complexity
// bool hasCycle(Node* head){
//     Node* temp = head;
//     unordered_map<Node*, int> NodeMp;

//     while(temp != nullptr){
//         if(NodeMp.find(temp) != NodeMp.end()){
//             return true;
//         }
//         NodeMp[temp]++;
//         temp = temp -> next;
//     }
//     return false;
// }
bool hasCycle(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast != nullptr && fast -> next != nullptr){
        slow = slow ->next;
        fast = fast -> next -> next;

        if(slow == fast){
            return true;
        }
    }
    return false;
}
int main()
{
    // Node* head = new Node(1);
    // head -> next = new Node(2);
    // head -> next -> next = new Node(3);
    // head -> next -> next -> next = new Node(4);
    // head -> next -> next -> next -> next = new Node(5);

    Node* first = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    Node* fifth = new Node(5);

    first -> next = second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = fifth;
    fifth -> next = third;

    if (hasCycle(first)) {
        cout << "Loop detected in the linked list." << endl;
    } else {
        cout << "No loop detected in the linked list." << endl;
    }

    delete first;
    delete second;
    delete third;
    delete fourth;
    delete fifth;
 
   return 0;
}