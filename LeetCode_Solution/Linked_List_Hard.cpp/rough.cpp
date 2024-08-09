#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = nullptr;
    }
};
Node *convert2LL(vector<int> &arr, Node *head)
{
    head = new Node(arr[0]);
    Node *temp = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *mover = new Node(arr[i]);
        temp->next = mover;
        temp = mover;
    }
    return head;
}
Node *insertNode(Node *head)
{
    Node* temp = head;
    while (temp != nullptr)
    {
        Node *copyNode = new Node(temp->data);
        copyNode->next = temp->next;
        temp->next = copyNode;
        temp = temp->next->next;
    }
    return head;
}
void print(Node *head)
{
    while (head != nullptr)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "nullptr";
    cout << endl;
}
int main()
{
    Node *head = nullptr;
    vector<int> arr = {7, 13, 11, 10, 1};
    head = convert2LL(arr, head);
    print(head);
    head = insertNode(head);
    print(head);
    return 0;
}