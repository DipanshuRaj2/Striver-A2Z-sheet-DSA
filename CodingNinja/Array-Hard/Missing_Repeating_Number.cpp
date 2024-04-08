// #include<bits/stdc++.h>
// using namespace std;
// vector<int>repeatinAndMissingNumber(vector<int>&a){
//     int missing = -1;
//     int repeating = -1;

//     for(int i = 1; i<=a.size(); i++){
//         int cnt = 0;
//         for(int j = 0; j<a.size(); j++){
//             if(a[j]==i){
//                 cnt++;
//             }
//         }
//         if(cnt == 2){
//             repeating = i;
//         }
//         if(cnt == 0){
//             missing = i;
//         }
//     }
//     return {repeating,missing};
// }
// int main()
// {
//     vector<int>a = {3,1,2,5,3};
//     vector<int>ans = repeatinAndMissingNumber(a);
//     cout<<ans[0]<<" "<<ans[1];
//    return 0;
// }

//-------------------------------------------------O(n*n)----------------time complexity-------------------------
// #include<bits/stdc++.h>
// using namespace std;
// vector<int>repeatinAndMissingNumber(vector<int>&a){
//     int n = a.size();
//     vector<int>ans(n , 0);
//     for(int i = 0; i<n; i++){
//         ans[a[i]]++; // it store the count the frequency of given array in to new ans arr.
//     }
//     int repeating = -1, missing = -1;
//     for(int i = 1; i<n; i++){
//         if(ans[i] == 2){
//             repeating = i;
//         }
//         else if(ans[i]== 0){
//             missing = i;
//         }
//     }
//     return{repeating, missing};

// }
// int main()
// {
//     vector<int>a = {3,1,2,5,3};
//     vector<int>ans = repeatinAndMissingNumber(a);
//     cout<<ans[0]<<" "<<ans[1];
//    return 0;
// }

// ----------------------time complexity = --O(2n)-----------space --= --O(n)------------

#include<bits/stdc++.h>
using namespace std;
vector<int>repeatinAndMissingNumber(vector<int>&a){
    sort(a.begin(), a.end());
    int repeating = -1;
    int missing = -1;
    for(int i = 0; i<a.size()-1;i++){
        if(a[i]==a[i+1]){
            repeating = a[i];
        }
        else if((a[i] != a[i+1]-1) && (a[i] !=a[i+1])){
            missing = a[i]+1;
        }
    }
    return{repeating , missing};
}
int main()
{
    vector<int>a = {8,4,1,6,7,2,5,8};
    vector<int>ans = repeatinAndMissingNumber(a);
    cout<<ans[0]<<" "<<ans[1];
   return 0;
} //