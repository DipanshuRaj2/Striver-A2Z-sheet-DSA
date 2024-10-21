//maxlenght of subarray with atmost 2types of fruits;

//bruteforce
// #include<bits/stdc++.h>
// using namespace std;
// class Solution{
//     public:
//     int totalfruits(vector<int>&arr){
//     int maxi = 0; int n = arr.size();
//     for(int i = 0; i<arr.size(); i++){
//         set<int>st;
//         for(int j = i; j<arr.size(); j++){
//             st.insert(arr[j]);
//             if(st.size() <= 2){
//                 int len = j - i + 1;
//                 maxi = max(maxi, len);
//             }
//             else{
//                 break;
//             }
//         }
//     }
//     return maxi;
//     }
// };
// int main(){
//     Solution* sol = new Solution();

//     vector<int>arr = {3,3,3,1,2,1,1,2,3,3,4};
//     cout<<sol->totalfruits(arr);
//     return 0;
// }


// here we use the 2 sliding window techinique

// #include<bits/stdc++.h>
// using namespace std;
// class Solution{
//     public:
//     int totalfruits(vector<int>& arr){
//         int l = 0; int r = 0;
//         int n = arr.size(); int maxi = 0;
//         unordered_map<int, int>ump;
//         while(r < n){
//             ump[arr[r]]++;
//             if(ump.size() > 2){
//                 while(ump.size() > 2){
//                     ump[arr[l]]--;
//                     if(ump[arr[l]] == 0){
//                         ump.erase(arr[l]);
//                     }
//                     l++;
//                 }
//             }
//             if(ump.size() <= 2){
//                 int len = r -l + 1;
//                 maxi = max(maxi, len);
//             }
//             r++;
//         }
//         return maxi;
//     }
// };
// int main(){
//     Solution* sol = new Solution();

//     vector<int>arr = {3,3,3,1,2,1,1,2,3,3,4};
//     cout<<sol->totalfruits(arr);
//     return 0;
// }
// one more optimal approach eliminate the other while loop 
// best optimal approach


#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int totalfruits(vector<int>& arr){
        int l = 0; int r = 0;
        int n = arr.size(); int maxi = 0;
        unordered_map<int, int>ump;
        while(r < n){
            ump[arr[r]]++;
            if(ump.size() > 2){
                ump[arr[l]]--;
                if(ump[arr[l]] == 0){
                    ump.erase(arr[l]);
                 }
                 l++;
            }
            if(ump.size() <= 2){
                int len = r -l + 1;
                maxi = max(maxi, len);
            }
            r++;
        }
        return maxi;
    }
};
int main(){
    Solution* sol = new Solution();

    vector<int>arr = {3,3,3,1,2,1,1,2,3,3,4};
    cout<<sol->totalfruits(arr);
    return 0;
}














//wrong approach
// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
// public:
//     int fun(vector<int>& fruits) {
//          unordered_map<int, int>ump;
//         for(auto ele : fruits){
//             ump[ele]++;
//         }
//         int maxi = 0; int secMaxi = 0;
//         for(auto ele: ump){
//             maxi = max(maxi, ele.second);
//         }
//         cout<<"maxi: "<<maxi<<endl;
//         for(auto ele : ump ){
//             if(ele.second != maxi){
//                 secMaxi = max(secMaxi, ele.second);
//             }
//         }
//         cout<<"secmxi: "<<secMaxi<<endl;
//         return maxi + secMaxi;
//     }
// };
// int main(){
//     Solution *sol = new Solution();
//     vector<int>arr = {1,2,3,2,2};

//     cout<<sol->fun(arr);

//     return 0;
// }//