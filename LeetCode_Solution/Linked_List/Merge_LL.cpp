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
Node *mergeTwoLists(Node *list1, Node *list2)
{
    vector<int> ans;
    Node *temp1 = list1;
    Node *temp2 = list2;
    while (temp1 != nullptr)
    {
        ans.push_back(temp1->data);
        temp1 = temp1->next;
    }
    while (temp2 != nullptr)
    {
        ans.push_back(temp2->data);
        temp2 = temp2->next;
    }
    sort(ans.begin(), ans.end());
   
    Node *newHead = new Node(ans[0]);
    temp1 = newHead;
    for (int i = 1; i < ans.size(); i++)
    {
        Node *temper = new Node(ans[i]);
        temp1->next = temper;
        temp1 = temper;
    }
    return newHead;
}
void print(Node* head){
    while(head != nullptr){
        cout <<head -> data<<"->";
        head = head -> next;
    }
    cout<<"nullptr";
    cout<<endl;
}
main()
{
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    Node *head1 = new Node(1);
    head1->next = new Node(2);
    head1->next->next = new Node(3);
    head1->next->next->next = new Node(4);
    print(head);
    print(head1);

    head = mergeTwoLists(head, head1);
    print(head);
    return 0;
}