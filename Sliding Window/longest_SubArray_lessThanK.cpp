//brute force
/*
#include<bits/stdc++.h>
using namespace std;
int longestSubArrayLessThanK(vector<int>&arr, int k){
    int n = arr.size();
    int maxi = 0;
    int st = 0; int end = 0; 
    for(int i = 0; i <n; i++){
        int sum = 0;
        for(int j = i; j<n; j++){
            sum += arr[j];
            if(sum <= k){
                int len = j - i + 1;
                if(len > maxi){
                    maxi = max(len, maxi);
                    st = i;
                    end = j;
                }
            }
            else if(sum > k){
                break;
            }
        }
    }
    for(int i = st; i<=end; i++) {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    return maxi;
}
int main(){
    vector<int>arr = {1,2,3,4,5,6,7,8,9,10};
    int k = 20;
    cout<<"longest SubArray: "<<longestSubArrayLessThanK(arr, k);
    return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;
int longestSubArrayLessThanK(vector<int>& arr, int k){
    int n = arr.size();
    int maxi = 0;
    int left = 0; int right = 0;
    int start = 0; int end = 0;
    int sum = 0;
    while(right < n){
        sum += arr[right];
        if(sum <= k){
            int len = right - left + 1;
            if(len > maxi){
              maxi = max(maxi, len);
              start = left;
              end = right;
              
            }
            right++;
        }
        else{
          while(sum > k){
            sum -= arr[left];
            left++;
         } 
        }
    }
    for(int i = start; i<=end; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    return maxi;
}
int main(){
    vector<int>arr = {1,2,3,4,5,6,7,8,9,10};
    int k = 20;
    cout<<"longest SubArray: "<<longestSubArrayLessThanK(arr, k);

    return 0;
}