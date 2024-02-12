// #include<bits/stdc++.h>
// using namespace std;
// int findUnique(int *arr, int size)
// {
//     //Write your code here
//     sort(arr, arr+size);
//     for(int i = 1; i<size; i=i+2){
//         if(arr[i] != arr[i+1]){
//             return arr[i];
//         }
//     }
// }
// int main()
// {
//     int arr[]={1 ,3 ,1 ,3 ,6 ,6 ,7 ,10 ,7};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     cout<<findUnique(arr, size);
//    return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int findUnique(int arr[], int size){
    unordered_map<int,int>m;
    for(int i = 0; i<size; i++){
        m[arr[i]]++;
    }
    for(auto ele:m){
        if(ele.second ==1){
            return ele.first;
        }
    }
}
int main()
{
    int arr[]={1 ,3 ,1 ,3 ,6 ,6 ,7 ,10 ,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<findUnique(arr, size);
   return 0;
}

