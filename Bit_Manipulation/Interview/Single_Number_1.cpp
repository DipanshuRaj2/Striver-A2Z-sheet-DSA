#include <bits/stdc++.h>
using namespace std;
int singleNumber(vector<int>&arr){
    int Xor = 0;
    for(int i = 0; i<arr.size(); i++){
        Xor = Xor^arr[i];
    }
    return Xor;
}
int main()
{
    vector<int>arr = {1,1,2,2,24,5,5,4,4};
    cout<<singleNumber(arr);

    return 0;
}   