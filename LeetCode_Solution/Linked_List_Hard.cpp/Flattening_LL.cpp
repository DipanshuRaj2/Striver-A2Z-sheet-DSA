#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node * bottom;
    Node(int data1)
    {
        data = data1;
        next = nullptr;
        bottom = nullptr;
    }
};
Node* flatteningLL(Node* head){
    Node* temp = head;
    queue<Node*> qe;

    while(temp != nullptr){
        if(temp -> bottom){
            qe.push(temp -> bottom);
        }
        temp = temp -> next;
        if(!qe.empty() && temp -> next == nullptr){
            temp -> next = qe.front();
            qe.pop();
        }
    }
    return head;  
}
Node* newflattingLL(Node* head){
    Node* temp = head;
    vector<int>ans;
    while(temp != nullptr){
        ans.push_back(temp->data);
        temp = temp -> next;
    }
    sort(ans.begin(), ans.end());
    head = new Node(ans[0]);
    temp = head;
    for(int i = 1; i<ans.size(); i++){
        Node* newNode = new Node(ans[i]);
        temp -> next = newNode;
        temp = newNode;
    }
    return head;
}
void print(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout<<temp -> data<<"->";
        temp = temp -> next;
    }
    cout<<"nullptr";
    cout<<endl;
}
main()
{
    Node *head = new Node(5);
    head ->bottom = new Node(7);
    head ->bottom -> bottom = new Node(8);
    head ->bottom -> bottom -> bottom= new Node(30);

    head->next = new Node(10);
    head -> next -> bottom = new Node(20);

    head->next->next = new Node(19);
    head->next->next -> bottom = new Node(22);
    head->next->next -> bottom -> bottom= new Node(50);

    head->next->next->next = new Node(28);
    head->next->next->next->bottom = new Node(35);
    head->next->next->next->bottom ->bottom = new Node(40);
    head->next->next->next->bottom ->bottom->bottom= new Node(45);
    
    head = flatteningLL(head);
    print(head);

    head = newflattingLL(head);
    print(head);

    return 0;
}