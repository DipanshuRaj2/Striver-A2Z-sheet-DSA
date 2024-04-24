#include <bits/stdc++.h> 
using namespace std;
vector<pair<int, int>> pairs(vector<int> &arr, int n) {
    sort(arr.begin(), arr.end());
    vector<pair<int, int>> ans;
    int low = 0, end = n - 1;
    while (low < end) {
        if (abs(arr[low]) == (arr[end])) {
            ans.push_back(make_pair(arr[low], arr[end]));
            low++;
            end--;
        } else if (abs(arr[low]) < (arr[end])) {
            end--;
        } else {
            low++;
        }
    }
    return ans;
}
int main(){
    vector<int>nums={1, -3, 2, 3, 6, -1};
    int n = nums.size();
    vector<pair<int, int>>ans = pairs(nums, n);
    for(auto ele: ans){
        cout<<ele.first<<" "<<ele.second<<",";
    }
    return 0;
}