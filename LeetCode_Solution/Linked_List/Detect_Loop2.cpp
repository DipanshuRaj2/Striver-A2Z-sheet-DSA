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
//brute force approach
Node* Detect_LoopBrute(Node* head){
    Node* temp = head;
    unordered_map<Node*, int>ump;
    while(temp != nullptr){
        if(ump.find(temp) != ump.end()){
            return temp;
        }
        ump[temp]++;
        temp = temp -> next;
    }
    return nullptr;
}

//hare and tortoise approach
Node* Detect_LoopBest(Node* head){
    Node* slow = head;
    Node* fast = head;

    while(fast != nullptr && fast -> next == nullptr){
        fast = fast -> next-> next;
        slow = slow -> next;
        if(fast == slow){
            slow = head;
            while(slow != fast){
                slow = slow -> next;
                fast = fast -> next;
            }
            return fast;
        }
    }
    return nullptr;
}

int main()
{
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

    cout<< Detect_LoopBrute(first)<<endl;
    cout<< Detect_LoopBest(first);
   return 0;
}