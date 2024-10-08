//brute force
/*
#include<bits/stdc++.h>
using namespace std;
vector<int>allSubarrayWithK(vector<int>&arr, int k){
    vector<int>ans;
    for(int i = 0; i<arr.size(); i++){
        int sum = 0;
        int cnt = 0;
        for(int j = i; j<arr.size(); j++){
            if(cnt != k){
                sum += arr[j];
                cnt++;
            }
            else{
                break;
            }
        }
        if(cnt ==k)
        ans.push_back(sum);
    }
    return ans;
}
int main(){
    vector<int>arr = {1,2,3,4,5,6};
    int k = 3;
    arr = allSubarrayWithK(arr, k);
    for(int i = 0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
*/
// optimal approach by using sliding windows technique
#include<bits/stdc++.h>
using namespace std;
vector<int>allSubarrayWithK(vector<int>&arr, int k){
    vector<int>ans;
    int start = 0; int end = 0;
    int sum = 0;
    while(end < arr.size()){
        sum += arr[end];
        if((end - start+1)< k){
            end++;
        }
        else{
            ans.push_back(sum);
            sum -= arr[start];
            end++;
            start++;
        }
    }
    return ans;
}
int main(){
    vector<int>arr = {1,2,3,4,5,6};
    int k = 3;
    arr = allSubarrayWithK(arr, k);
    for(int i = 0; i<arr.size(); i++){
        cout<<arr[i]<<" "; 
    }
      
    return 0;
}
