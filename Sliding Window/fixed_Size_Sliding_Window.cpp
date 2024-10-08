//fixed size sliding windows is used when we fetch the information like K size or find the k the subarray.
//code

// #include<bits/stdc++.h>
// using namespace std;
// void printkthString(string& name, int k){
//     int n = name.size();
//     int start = 0;
//     int end = 0;
//     string ans = "";
//     while(end < n){
//         ans+= name[end];
//         if((end - start + 1) < k){
//             end++;
//         }
//         else{
//             cout<<ans<<endl;
//             ans.erase(0, 1);
//             start++;
//             end++;
//         }
//     }
// }
// int main(){
//     string name = "Dipanshu";
//     printkthString(name, 3);
//     return 0;
// } 


//generate all subarray
// #include<bits/stdc++.h>
// using namespace std;
// void generateAllSubarray(string name){
//     int n = name.size();
//     for(int i = 0; i<n; i++){
//         string ans = "";
//         for(int j = i; j<n; j++){
//             ans += name[j];
//         }
//         cout<<ans<<endl;
//     }
// }
// int main(){
//     string name = "abcabcbb";
//     generateAllSubarray(name);
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int longestSubstring(string &s){
    int n = s.size();
    int maxi = 0;
    for(int i = 0; i<n; i++){
        vector<int>arr(256, 0);
        for(int j = i; j<n; j++){
            if(arr[s[j]] == 1) break;
            int len = j-i+1;
            maxi = max(len , maxi);
            arr[s[j]] = 1;
        }
    }
    return maxi;
}
int main(){
    string str = "abcabcbb";
    cout<<longestSubstring(str);
    
    return 0;
}