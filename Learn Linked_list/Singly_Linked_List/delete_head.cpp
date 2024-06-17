#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;

    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};
Node *convert2LL(vector<int> arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;

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
    while (head != nullptr){
      cout << head->data << " ";
      head = head->next;
    }
    cout<<endl;
}
Node *removehead(Node *head)
{
    if(head == nullptr) {
        return head;
    }
    Node *temp = head;
    head = head->next;
    delete temp;
    return head;
}
int main()
{
    vector<int> arr = {3};
    Node *head = convert2LL(arr);

    head = removehead(head);
    print(head);
   
    return 0;
}