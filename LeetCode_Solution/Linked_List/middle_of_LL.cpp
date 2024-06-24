/*Input: head = [1,2,3,4,5]
Output: [3,4,5]
Explanation: The middle node of the list is node 3.
Example 2:


Input: head = [1,2,3,4,5,6]
Output: [4,5,6]
Explanation: Since the list has two middle nodes with values 3 and 4, we return the second one.*/
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
    Node(){
        next = nullptr;
    }
};
void print(Node* head){
    int count = 0;
    while(head != nullptr){
        cout<<head -> data<<" -> ";
        head = head -> next;
        count ++;
    }
    cout<<endl;
    cout<<count;
    cout<<endl;
}
Node* middleNode(Node* head){
    int cnt = 0;
    Node* temp = head;
    while(temp != nullptr){
        cnt++;
        temp = temp -> next;
    }
    
    int midEle = (cnt/2) + 1;
    
    temp = head;
    while(temp != nullptr){
        midEle = midEle - 1;
        if(midEle == 0){
            break;
        }
        temp = temp -> next;
    }
    return temp;
}
// best apprach = tortoise and hare approach
    Node* middleNode1(Node* head){
        Node* slow = head;
        Node* fast = head;
        while(fast != nullptr && fast->next != nullptr){
            slow = slow -> next;
            fast = fast -> next -> next;
        } 
        return slow;
    }
int main()
{
    Node* head = new Node(1);
    head -> next = new Node(2);
    head -> next -> next = new Node(3);
    head -> next -> next -> next = new Node(4);
    head -> next -> next -> next ->next =  new Node(5);
    print(head);
    head = middleNode1(head);
    print(head);
   return 0;
}//