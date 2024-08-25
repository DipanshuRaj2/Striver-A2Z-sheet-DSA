#include <bits/stdc++.h>
using namespace std;
/*
int singleNumber(vector<int>&arr){
    // brute force
    unordered_map<int,int>ump;
    for(int i = 0; i<arr.size(); i++){
        ump[arr[i]]++;
    }
    for(auto ele : ump){
        if(ele.second == 1){
            return ele.first;
        }
    }
    return 0;
}
*/
/*
int singleNumber(vector<int>&arr){
    //better approach  no use extra space
    int ans = 0;
    for(int bits = 0; bits<31; bits++){
        int cnt = 0;
        for(int i = 0; i<arr.size(); i++){
            if(arr[i]&(1<<bits)){
                cnt++;
            }
        }
        if(cnt % 3 == 1){
            ans = ans | (1<<bits);
        }
    }
    return ans;
}
*/

int singleNumber(vector<int> &arr)
{
    //optimal approach
    sort(arr.begin(), arr.end());
    for (int i = 1; i < arr.size(); i = i + 3)
    {
        if (arr[i] != arr[i - 1])
        {
            return arr[i - 1];
        }
    }
    return arr[n - 1];
}
int main()
{
    vector<int> arr = {5, 5, 5, 6, 4, 4, 4};
    cout << singleNumber(arr);
    return 0;
}