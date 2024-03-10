// #include<bits/stdc++.h>
// using namespace std;
// int longestSuccessiveElements(vector<int>&arr) {
//     // Write your code here.
//     sort(arr.begin(), arr.end());
//     int count = 1;
//     int maxi = 1;
//     for(int i =0; i<arr.size()-1; i++){
//         if(arr[i]==arr[i+1]-1){
//             count++;
//             maxi = max(count, maxi);
//         }
//         else if(arr[i]==arr[i+1]){
//             continue;
//         }
//         else if(arr[i] != arr[i+1]){
//             count = 1;
//         }
//     }
//     return maxi;
// }
// int main()
// {
//     vector<int>arr = {15, 6, 2, 1, 16, 4, 2, 29, 9, 12, 8, 5, 14, 21, 8, 12, 17, 16, 6, 26, 3};
//     int count = longestSuccessiveElements(arr);
//     cout<<count;
//    return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int longestSuccessiveElements(vector<int>&arr){
    unordered_set<int>st;
    int longest = 1;
    for(auto ele : arr){
        st.insert(ele);
    }
    for(auto it : st){
        if(st.find(it - 1)==st.end()){
            int count = 1;
            int x = it;
            while(st.find(x+1) != st.end()){
                x = x + 1;
                count++;
            }
            longest = max(longest, count);
        }
    }
    return longest;
}
int main()
{
    vector<int>arr = {15, 6, 2, 1, 16, 4, 2, 29, 9, 12, 8, 5, 14, 21, 8, 12, 17, 16, 6, 26, 3};
    int count = longestSuccessiveElements(arr);
    cout<<count;
    
   return 0;
}