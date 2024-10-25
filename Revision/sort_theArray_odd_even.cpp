#include<bits/stdc++.h>
using namespace std; 
vector<int>sortOddEvenPlace(vector<int>arr){
    int n = arr.size();
    vector<int>odd;
    vector<int>even;
    int mini = INT_MIN; 
    for(int i = 0; i<arr.size(); i++){
        if(arr[i] % 2 == 1){
            odd.push_back(arr[i]);
        }
        else{
            even.push_back(arr[i]);
        }
    }
    sort(odd.begin(), odd.end(), greater<int>());
    sort(even.begin(), even.end()); 
    int i = 0; 
    while(even.size() != 0){
        odd.push_back(even[i]);
        even.erase(even[i]);
        i++;
    }
    return odd;
}
int main(){
    vector<int>arr = { 1, 3, 2, 7, 5, 4 };
    arr = sortOddEvenPlace(arr);
    for(int i = 0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}