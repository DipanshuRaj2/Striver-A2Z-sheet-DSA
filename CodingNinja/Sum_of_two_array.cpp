#include<bits/stdc++.h>
using namespace std;
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.
	int i = n-1;
	int j = m-1;
	int carry = 0;
	vector<int>ans;
	while(i>=0 && j>=0){
		int sum = a[i]+b[j]+carry;
		carry = sum/10;
		sum = sum % 10;
		ans.push_back(sum);
		i--;
		j--;
	}
	//case 1;
	while(i>=0){
		int sum = a[i]+carry;
		carry =sum/10;
		sum = sum%10;
		ans.push_back(sum);
		i--;
	}
	//case 2;
	while(j>=0){
		int sum = b[j]+carry;
		carry = sum/10;
		sum = sum%10;
		ans.push_back(sum);
		j--;
	}
	//case 3;
	while(carry!=0) {
		int sum = carry;
		carry = sum/10;
		sum = sum%10;
		ans.push_back(sum);
	}
	reverse(ans.begin(), ans.end());
	return ans;
}
int main()
{
    vector<int>a ={1 ,2 ,3};
    vector<int>b ={9,9};
    int n = a.size();
    int m = b.size();
    vector<int>ans = findArraySum(a, n,b, m);
    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
   return 0;
}