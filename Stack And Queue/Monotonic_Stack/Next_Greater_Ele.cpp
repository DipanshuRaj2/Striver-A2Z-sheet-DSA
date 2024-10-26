#include<bits/stdc++.h>
using namespace std;
//brute force
vector<int>nextGreaterElement(vector<int>&arr){
    vector<int>ans(arr.size(), -1);
    int k = 0; 
    for(int i = 0; i<ans.size()-1; i++){
        for(int j = i+1; j<ans.size(); j++){
            if(arr[j] > arr[i]){
                ans[i] = arr[j];
                break;
            }
        }
    }
    return ans;
}
//optimal approach
vector<int>nextGreaterElement1(vector<int>&arr){
    vector<int>ans(arr.size()); stack<int>st;
    for(int i = arr.size()-1; i >= 0; i--){
        while(!st.empty() && st.top() < arr[i]){
            st.pop();
        }
        if(st.empty()){
            ans[i] = -1;
        }
        else
            ans[i] = st.top();
        st.push(arr[i]);
    }
    return ans;
}
int main(){
    vector<int>arr = {6, 0, 8, 1, 3};
    arr = nextGreaterElement1(arr);
    for(int i = 0; i<arr.size(); i++){
        cout<<arr[i]<<" "  ;  
    }
   return 0;
}