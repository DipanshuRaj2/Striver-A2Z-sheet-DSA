#include<bits/stdc++.h>
using namespace std;
int minimiseZ(vector<int> &a){
    // Write your code here.
    vector<int> postive;
    vector<int> negative;

    for(int i = 0; i<a.size(); i++){
        if(a[i] >= 0){
            postive.push_back(a[i]);
        }
        else{
            negative.push_back(a[i]);
        }
    }
    sort(postive.begin(), postive.end());
    sort(negative.begin(), negative.end());
    
    int result = 0;
    if(postive.size()== 0){
        result = negative[0] * negative[1]; 
    }
    if(negative.size() == 0){
        result = postive[0] * postive[1];
    }
    if(postive.size() + negative.size()== a.size()){
        result =  postive[a.size()-1] * negative[0];
    }
    return result;
    
}

int main()
{
    vector<int> a = {-6, 10, -1, 2, 10, -1};
    cout<<minimiseZ(a);
   return 0;
}