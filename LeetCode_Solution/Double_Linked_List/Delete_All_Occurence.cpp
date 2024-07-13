#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node *prev;

    Node(int d)
    {
        data = d;
        next = nullptr;
        prev = nullptr;
    }
};
Node *convert2DLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        prev->next = temp;
        temp->prev = prev;
        prev = temp;
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
    cout<<"null";
    cout<<endl;
}
Node *deleteAllOccurOfX(Node *head, int x)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        
        if (temp->data == x)
        {
            if (head == temp)
            {
                head = temp->next;
            }
            Node *nextNode = temp->next;
            Node *prevNode = temp ->prev;

            if (prevNode != nullptr)
                prevNode->next = nextNode;
            if (nextNode != nullptr)
                nextNode->prev = prevNode;
            delete (temp);
            temp = nextNode;
        }
        else
        {
            temp = temp->next;
        }
    }
    return head;
}
int main()
{
    vector<int> arr = {10, 4, 10, 10, 6, 10};
    Node *head = convert2DLL(arr);
    print(head);
    head = deleteAllOccurOfX(head, 10);
    print(head);
    return 0;
}