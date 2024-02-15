#include<bits/stdc++.h>
using namespace std;
void print(int arr[], int n){
   stack<int>st, min_st;

   for(int i = 0; i<n; i++){
      st.push(arr[i]);

      if(min_st.empty()||arr[i]<=min_st.top()){
         min_st.push(arr[i]);
      }
      else{
         int a = min_st.top();
         min_st.push(a);
      }
   }
  while(!st.empty()){
   cout<<st.top()<<endl;
   st.pop();
  }
  cout<<endl;
  cout<<"Min_st element "<<endl;
  while(!min_st.empty()){
   cout<<min_st.top()<<endl;
   min_st.pop();
  }
}
int main()
{
   int arr[] = {1 ,6, 43, 1, 2, 0, 5};
   int n  = sizeof(arr)/sizeof(arr[0]);
   print(arr, n);
   
   return 0;
}