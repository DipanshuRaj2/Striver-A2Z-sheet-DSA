#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node *random;

    Node(int d)
    {
        data = d;
        next = nullptr;
        random = nullptr;
    }
    Node(int d, Node *nextNode, Node *randomNode)
    {
        data = d;
        next = nextNode;
        random = randomNode;
    }
};

Node* insertNode(Node* head);
void printClonedLinkedList(Node *head)
{
    while (head != nullptr)
    {
        cout << "Data: " << head->data;
        if (head->random != nullptr)
        {
            cout << ", Random: " << head->random->data;
        }
        else
        {
            cout << ", Random: nullptr";
        }
        cout << endl;

        head = head->next;
    }
}
int main()
{
    // Example Linked list: 7 -> 14 -> 21 -> -> 28
    Node *head = new Node(7);
    head->next = new Node(14);
    head->next->next = new Node(21);
    head->next->next->next = new Node(28);

    // Assigning random pointers
    head->random = head->next->next;
    head->next->random = head;
    head->next->next->random = head->next->next->next;
    head->next->next->next->random = head->next;

    cout << "Original Linked List with Random Pointers: " << endl;
    printClonedLinkedList(head);

    Node *clonedList = brutecloneLL(head);
    cout << "Cloned Linked list with Random Pointer: " << endl;
    printClonedLinkedList(head);

    return 0;
}