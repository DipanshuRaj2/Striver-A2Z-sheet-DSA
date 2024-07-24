#include <bits/stdc++.h>
using namespace std;
bool comparator(pair<int, int>a, pair<int, int>b){
    return a.second < b.second;
}
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>>vp;
    for(int i = 0; i < n; i++){
        int num1 , num2;
        cin >> num1 >> num2;
        vp.push_back(make_pair(num1, num2)); 
    }

    sort(vp.begin(),vp.end(), comparator);
    for(auto ele : vp){
        cout<<"{"<<ele.first<<","<<" "<<ele.second<<"}";
    }
    return 0;
}