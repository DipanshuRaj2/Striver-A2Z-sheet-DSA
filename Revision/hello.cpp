// #include<bits/stdc++.h>
// using namespace std;
// vector<int>mergeTwoArray(vector<int>&arr1, vector<int>&arr2){
//     int j = 0; 
   
//     int n = arr1.size();
//     int m = arr2.size();
//     int i = 0;
//     vector<int>ans;
//     while(i < n && j < m){
//         if(arr1[i] < arr2[j]){
//             ans.push_back(arr1[i++]);
//         }
//         else{
//             ans.push_back(arr2[j++]);
//         }
//     }
//     while(i < n){
//        ans.push_back(arr1[i++]);
//     }
//     while(j < m){
//         ans.push_back(arr2[j++]);
//     }
//     return ans;
// }
// int main()
// {
//     vector<int>arr1 = {1, 3, 4, 5};
//     vector<int>arr2 = {2, 4, 6, 8};
//     vector<int>ans = mergeTwoArray(arr1, arr2);
//     for(int i = 0; i<ans.size(); i++){
//         cout<<ans[i]<<" ";
//     }
//     return 0;
// }

// linked list reverse
 #include<bits/stdc++.h>
 using namespace std;
 class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        data = d;
        next = nullptr;
    }
 };
 Node* reverse(Node* head){
    Node* back = nullptr;
    Node* temp = head;
    while(temp != nullptr){
        Node* front = temp -> next;
        temp -> next = back;
        back = temp;
        temp = front; 
    }
    return back;
 }
 void print(Node* head){
    while(head != nullptr){
        cout<<head -> data<<"->";
        head = head -> next;
    }
    cout<<"nullptr";
    cout<<endl;
 }
 int main(){
    Node* head = new Node(1);
    head -> next = new Node(2);
    head -> next -> next = new Node(3);
    head -> next -> next -> next = new Node(4);
    head -> next -> next -> next -> next = new Node(5);
    print(head);
    head = reverse(head);
    print(head);
 }
