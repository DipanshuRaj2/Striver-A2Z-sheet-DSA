#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

// int countNodesinLoop(Node *head) {
//     Node* slow = head;
//     Node* fast = head;
//     int count = 0;
//     while (fast != nullptr && fast->next != nullptr) {
//         slow = slow->next;
//         fast = fast->next->next;
        
//         if (slow == fast) {  // Loop detected
//         count = 1;
//             Node* temp = slow;
            
//             while (temp->next != slow) {
//                 temp = temp->next;
//                 count++;
//             }
//             return count;  // Return the count of nodes in the loop
//         }
//     }
//     return 0;  // No loop found
// }
int countNodesinLoop(Node* head){
    Node* temp = head;
    unordered_map<Node*, int>mpp;
    int value = 0;
    int timer;
    while(temp != nullptr){
        if(mpp.find(temp) != mpp.end()){
            value = mpp[temp];
            return timer - value;
        }
        mpp[temp] = timer;
        timer++;
        temp = temp -> next;
    }
    return 0;
}
int main() {
    
    
    Node* first = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    Node* fifth = new Node(5);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = first;  // Creating a loop here

    cout << countNodesinLoop(first) << endl;  // Output should be 5
    return 0;
}
