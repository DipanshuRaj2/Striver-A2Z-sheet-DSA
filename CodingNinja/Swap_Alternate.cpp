#include<bits/stdc++.h>
using namespace std;
void swapAlternate(int arr[], int n){
    for(int i = 0; i<n-1; i=i+2){
        swap(arr[i], arr[i+1]);
    }
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n = 6;
    int arr[]={1,2,3,4,5,6};
    swapAlternate(arr, n);

   return 0;
}