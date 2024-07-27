#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = nullptr;
    }
};
class Solution
{
public:
    Node *rotateRight(Node *head, int k)
    {
        // k = k % n;
        vector<int> arr;
        Node *temp = head;
        while (temp != nullptr)
        {
            arr.push_back(temp->data);
            temp = temp->next;
        }
        k = k % arr.size();
        reverse(arr.begin(), arr.end());
        reverse(arr.begin(), arr.begin() + k);
        reverse(arr.begin() + k, arr.end());
        Node *head1 = new Node(arr[0]);
        temp = head1;
        for (int i = 1; i < arr.size(); i++)
        {
            Node *newNode = new Node(arr[i]);
            temp->next = newNode;
            temp = newNode;
        }
        return head1;
    }
};
Node *convert2LL(vector<int> &arr) {
    if (arr.empty()) return nullptr;

    Node *head = new Node(arr[0]);
    Node *temp = head;

    for (int i = 1; i < arr.size(); i++) {
        Node *newNode = new Node(arr[i]);
        temp->next = newNode;
        temp = newNode;  // Corrected line
    }

    return head;
}
void print(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "nullptr";
    cout<<endl;
}
int main()
{
    Solution sol;
    vector<int> arr = {1, 2, 3, 4, 5};
    Node *head = convert2LL(arr);
    print(head);
    head = sol.rotateRight(head, 2);
    print(head);
}