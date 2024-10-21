#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findLucky(vector<int>& arr) {
        int lucky = -1;
        map<int, int>ump;// <arrElement , count store>
        for(auto ele: arr)
            ump[ele]++;
        for(auto ele: ump){
            cout<<ele.first<<" - "<<ele.second<<endl;
        }
        for(int i = 0; i<arr.size(); i++){
            if(arr[i] == ump[arr[i]] && lucky < arr[i]){
                lucky = arr[i];
            }
        }
        return lucky;
    }
};
int main(){
    vector<int>arr = {5,4,7,8,4,8,8,3,7,7,6,3,7,6,5,6,8,4,5,7,4,7,7,5,2,5,6,6,8,1,6,8,8,8,9,3,2,9};
    Solution* sol = new Solution();
    int ele = sol->findLucky(arr);
    cout<<ele;
}