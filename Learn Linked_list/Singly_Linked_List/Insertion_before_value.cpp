#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;

    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }

    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
    Node()
    {
        next = NULL;
    }
};
Node *convert2LL(vector<int> arr)
{
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for (int i = 1; i < arr.size(); i++)
    {
        
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = mover->next;
    }
    return head;
}
void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

Node *insertBeforeValue(Node *head, int ele, int val)
{
    if (head == NULL)
    {
        return head;
    }
    if (head->data == val)
    {
        return new Node(ele, head);
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        if (temp->next->data == val)
        {
            Node *x = new Node(ele);
            x->next = temp->next;
            temp->next = x;
            break;
        }
        temp = temp->next;
    }
    return head;
}
int main()
{
    vector<int>arr = {1, 2, 3, 4};
    Node* head = convert2LL(arr);
    print(head);
    head = insertBeforeValue(head, 100, 4);
    print(head);
    return 0;
}
