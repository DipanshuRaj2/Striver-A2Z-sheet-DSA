#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>> twoSum(vector<int>& arr, int n, int target) {
    vector<pair<int,int>> ans;
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == target) {
                ans.push_back({arr[i],arr[j]});
            }
        }
    }
    if(ans.empty()){
        ans.push_back({-1, -1});
    }
    return ans;
}

int main() {
    vector<int> v = {2, 7, 11, 13};
    int n = v.size();
    int target = 9;

    vector<pair<int, int>> result = twoSum(v, n, target);

    if(result.empty()) {
        cout << "No pairs found.\n";
    } else {
        for(auto pair : result) {
            cout << pair.first << " " << pair.second << endl;
        }
    }
    return 0;
}
