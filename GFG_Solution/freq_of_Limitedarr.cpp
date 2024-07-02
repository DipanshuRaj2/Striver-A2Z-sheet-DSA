#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int arr[5] = {2, 3, 2, 3, 5};
    int temp[5] = {0};
    for(int i = 0; i<5; i++){
        temp[arr[i] - 1]++;
    }
    for(int i = 0; i<5; i++){
        cout<<temp[i]<<" ";
    }
   return 0;
}