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
Node *convert2LL(vector<int> &arr)
{
    Node *back = new Node(arr[0]);
    Node *head = back;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *newNode = new Node(arr[i]);
        back->next = newNode;
        newNode->prev = back;
        back = newNode;
    }
    return head;
}
Node *removeDuplicates(Node *head)
{
    // Your code here
    set<int> st;
    Node *temp = head;
    while (temp != nullptr)
    {
        st.insert(temp->data);
        temp = temp->next;
    }

    Node *dummy = new Node(-1);
    Node *current = dummy;
    int i = 0;
    for (auto ele : st)
    {
        Node *newNode = new Node(ele);
        current->next = newNode;
        current = newNode;
    }
    return dummy->next;
}


void print(Node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ->";
        head = head->next;
    }
    cout << "null";
    cout << endl;
}
int main()
{
    vector<int> arr = {1, 1, 1, 2, 3, 4};
    Node *head = convert2LL(arr);
    print(head);
    head = removeDuplicates(head);
    print(head);
    return 0;
}

