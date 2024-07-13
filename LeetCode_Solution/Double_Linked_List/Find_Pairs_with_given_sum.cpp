#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next = nullptr;
    Node* prev = nullptr;
    Node(int d){
        data = d;
        next = nullptr;
        prev = nullptr;
    }
};
Node* convert2DLL(vector<int>&arr){
    Node* prev=  new Node(arr[0]);
    Node* head = prev;
    Node* temp = head;
    for(int i = 1; i<arr.size(); i++){
        Node* newNode = new Node(arr[i]);
        temp -> next = newNode;
        temp -> prev = prev;
        temp = newNode;
    }
    return head;
}
vector<pair<int, int>> findPairsWithGivenSum(Node* head, int target){
    vector<pair<int, int>>ans;
    Node* temp = head;
    while(temp != nullptr){
        Node* newNode = temp -> next;
        Node* temp1 = newNode;
        int ele = temp -> data;

        while(temp1 != nullptr){
            if(ele + temp1 -> data == target){
                ans.push_back(make_pair(ele, temp1->data));
                break;
            }
            if(ele + temp1 -> data > target){
                break;
            }
            temp1 = temp1 -> next;
        }
        temp = temp -> next;
    }
    return ans;
}
void print(Node* head){
    while(head != nullptr){
        cout<<head -> data<<" ->";
        head = head -> next;
    }
    cout<<"X";
    cout<<endl;
}
int main(){
    vector<int>arr = {1, 2, 4, 5 ,6, 8, 9};
    Node* head = convert2DLL(arr);
    print(head);
    vector<pair<int, int>>ans = findPairsWithGivenSum(head, 7);

    for(auto ele : ans){
        cout<<ele.first <<" "<<ele.second<<" ";
        cout<<endl;
    } 
 return 0;
}