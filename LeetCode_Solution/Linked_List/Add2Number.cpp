#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};
Node *addTwoNumbers(Node *l1, Node *l2)
{
    if (l1 == nullptr && l2 == nullptr)
    {
        return nullptr;
    }
    Node *temp1 = l1;
    Node *temp2 = l2;
    Node *Dummy = new Node(-1);
    Node* current = Dummy;
    int carry = 0;
    while(temp1 != nullptr && temp2 != nullptr){
        int sum = carry;
        if(temp1 != nullptr){
            sum = sum + temp1 -> data;
        }
        if(temp2 != nullptr){
            sum = sum + temp2 -> data;
        }
        Node* newNode = new Node(sum % 10);
        carry = sum /10;

        current -> next = newNode;
        current = current -> next;

        if(temp1 != nullptr) temp1 = temp1 -> next;
        if(temp2 != nullptr) temp2 = temp2 -> next;
    }
    if(carry == 1){
        Node* newNode = new Node(1);
        current -> next = newNode;
    }
    return Dummy->next;

}

void print(Node *head)
{
    while (head != nullptr)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << endl;
}
main()
{
    Node *head1 = new Node(2);
    head1->next = new Node(4);
    head1->next->next = new Node(3);

    Node *head2 = new Node(5);
    head2->next = new Node(6);
    head2->next->next = new Node(9);
    print(head1);
    print(head2);

    Node *head = addTwoNumbers(head1, head2);
    print(head);
    return 0;
}