// #include <bits/stdc++.h>
// using namespace std;
// int maxConsecutiveOnes(vector<int>&arr, int k){
//     int maxi = 0;
    
//     for(int i = 0; i<arr.size(); i++){
//       int zeroes = 0;
//         for(int j = i; j<arr.size(); j++){
//             if(arr[j] == 0){
//                 zeroes++;
//             }
//             if(zeroes <= k){
//                 int len = j - i + 1;
//                 maxi = max(maxi, len);
//             }
//         }
//     }
//     return maxi;
// }
// int main()               
// {
//     vector<int>arr = {1,0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1};
//     int k = 3;
//     cout<<maxConsecutiveOnes(arr, k);
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int maxConsecutiveOnes(vector<int>&arr, int k ){
    int n = arr.size();
    int l = 0; int r = 0;
    int maxi = 0; int zeroes = 0;
    while(r < n){
        if(arr[r] == 0) zeroes++;
            if(zeroes > k){ //while loop
            if(arr[l] == 0){
                 zeroes--;
            }
            l++;    
        }
        if(zeroes <= k){
            int len = r -  l + 1;
            maxi = max(maxi , len);
        }
        r++;
    }
    return maxi;

}
int main(){
    vector<int>arr = {1,1,1,0,0,0,1,1,1,1,0};
    int k = 2;
    cout<<maxConsecutiveOnes(arr, k);
 return 0;
 }