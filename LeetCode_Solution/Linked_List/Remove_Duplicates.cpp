#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int data;
    ListNode* next;

    ListNode(int d){
        data = d;
        next = nullptr;
    }
};
ListNode* convert2LL(vector<int>&arr){
    ListNode* head = new ListNode(arr[0]);
    ListNode* temp = head;
    for(int i = 1; i< arr.size(); i++){
        ListNode* newNode = new ListNode(arr[i]);
        temp -> next = newNode;
        temp = newNode;
    }
    return head;
}
ListNode *deleteDuplicates(ListNode *head)
{
    map<int, int> mp;
    ListNode *temp = head;
    while (temp != nullptr)
    {
        mp[temp->data]++;
        temp = temp->next;
    }

    ListNode *dummy = new ListNode(-1);
    ListNode *current = dummy;
    for (auto ele : mp)
    {
        if (ele.second == 1)
        {
            ListNode *newNode = new ListNode(ele.first);
            current->next = newNode;
            current = newNode;
        }
    }
    return dummy->next;
}
void print(ListNode* head){
    while(head != nullptr){
        cout<<head -> data<<"->";
        head = head -> next;
    }
    cout<<"null";
}

int main()
{
    vector<int>arr ={1, 2, 2, 3, 4, 4, 5};
    ListNode* head = convert2LL(arr);
    print(head);
    cout<<endl;
    head = deleteDuplicates(head);
    print(head);
    return 0;
}