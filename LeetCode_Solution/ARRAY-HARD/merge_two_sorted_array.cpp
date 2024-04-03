#include<bits/stdc++.h>
using namespace std;
void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a, vector<long long> &b){
	// Write your code here.
	vector<long long>ans;
	for(int i = 0; i<a.size();i++){
		ans.push_back(a[i]);
	}
	for(int i = 0; i<b.size(); i++){
		ans.push_back(b[i]);
	}
	sort(ans.begin(), ans.end());
    for(int i = 0; i<ans.size(); i++){
        cout<< ans[i]<<" ";
    }
}
int main()
{
    vector<long long>a = {1 ,8 ,8};
    vector<long long>b ={2,3,4,5};
    mergeTwoSortedArraysWithoutExtraSpace(a , b);
    
   return 0;
}