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

// brute force techinque use array
Node *mergeTwoListsBrute(Node *list1, Node *list2)
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

Node *mergeTwoListsOptimal(Node* list1, Node* list2){

    Node* temp1 = list1;
    Node* temp2 = list2;

    Node* dummyNode = new Node(-1); 
    Node* temp = dummyNode;

    while(temp1!= nullptr && temp2 != nullptr){
        if(temp1 -> data < temp2 -> data){
            temp -> next = temp1;
            temp = temp1;
            temp1 = temp1 -> next;
        }
        else{
            temp -> next = temp2;
            temp = temp2;
            temp2= temp2 -> next;
        }
     }
    if(temp1 != nullptr){
        temp -> next = temp1;
    }
    else{
        temp -> next = temp2;
    }
    return dummyNode->next;
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


    // head = mergeTwoListsBrute(head, head1);
    // cout<<"Brute-force: ";
    // print(head);


    head = mergeTwoListsOptimal(head, head1);
    cout<<"optimal: ";
    print(head);
    return 0;
}