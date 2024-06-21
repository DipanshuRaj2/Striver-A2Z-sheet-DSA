#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* next;

    Node(int data1 , Node* next1){
        data = data1;
        next = next1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
    }
    
};
Node* convert2LL(vector<int>& arr){
        Node* head = new Node(arr[0]);
        Node* mover = head;

        for(int i = 1; i<arr.size(); i++){
            Node* temp = new Node(arr[i]);
            mover->next = temp;
            mover = mover->next;
        }
        return head;
}

int main()
{
    vector<int>arr = {2, 4, 5, 7, 8};
    // Node y = Node(arr[0], nullptr);
    // cout<< y.data;

    // Node *x = new Node(arr[3]);
    // cout<< x->next;

    Node* head = convert2LL(arr);
    cout<<head->next<<endl;
    Node* temp = head;
    int count = 0;
    while(temp!= nullptr){
        temp = temp->next;
        cout<<temp <<" ";
        count++;
       
    }
    cout<<count;


    return 0;

}