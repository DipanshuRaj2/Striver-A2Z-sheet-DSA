// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
// public:
//     int findKthPositive(vector<int>& arr, int k) {
//         vector<int>temp;
//       for(int i = 1; i<=1000; i++){
//             temp.push_back(i);
//         }    
 
//         vector<int>ans;
//         for(int i = 0; i< 1000; i++){
//             for(int j = 0; j<arr.size(); j++){
//                 if(temp[i] != arr[j]){
//                     ans.push_back(temp[i]);
//                 }
//             }
//         }
//         for(int i = 0; i<ans.size();i++){
//             cout<<ans[i]<<" ";
//         }
//         return ans[k-1];
//     }
// };
// int main()
// {
//     Solution sol;
//     vector<int>arr= {2,3,4,7,11};
//     int k = 5;
//     cout<<sol.findKthPositive(arr, k);
//    return 0;
//
// #include<bits/stdc++.h>
// using namespace std;
// void uncommonElement(vector<int> &arr, int k){
//     vector<int>temp;
//     for(int i = 1; i<=1000; i++){
//         temp.push_back(i);
//     }

//     vector<int>ans;
//     unordered_set<int>uncommon(temp.begin(), temp.end());
//     for(int num : arr){
//         if(uncommon.find(num) == uncommon.end()){
//             ans.push_back(num);
//         }
//     }
//     cout<<endl<<endl;
//     for(int i = 0; i<ans.size(); i++){
//         cout<<ans[i]<<" ";
//     }
    
// }
// int main()
// {
    
//     vector<int>arr = {2,3,4,7,11};
//     int k = 5;
//     uncommonElement(arr, k);
//    return 0;
// }

#include<bits/stdc++.h>
using namespace std;
void uncommonElement(vector<int> &arr){
    vector<int> temp;
    for(int i = 1; i <= 1000; i++){
        temp.push_back(i);
    }

    vector<int> ans;
    unordered_set<int> uncommon(temp.begin(), temp.end());
    for(int num : uncommon){
        if(arr.find(num) != arr.end()){
            uncommon.erase(num);
        }
        else{
            ans.push_back(num);
        }
    }

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {2, 3, 4, 7, 11};
    
    uncommonElement(arr);

    return 0;
}
