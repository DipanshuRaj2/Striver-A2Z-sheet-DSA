// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     vector<vector<int>>nums(n, vector<int>(n));
//     for(int i = 0; i<n; i++){
//         for(int j = 0; j<n; j++){
         
//             cout<<"nums["<<i<<"]"<<"["<<j<<"]: ";
//             cin >> nums[i][j];
//         }
//     }
//     cout<<"print the matrix :"<<endl;
//     for(int i = 0; i<n; i++){
//         for(int j = 0; j<n;j++){
//             cout<<nums[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<"triangular matrix :";
//     int sum = 0;
//     for(int i = 0; i<n; i++){
//         for(int j = n-1;j>=i;j--){
//             cout<<"nums["<<i<<"]"<<"["<<j<<"]: ";
//             cout<<nums[i][j];
//             sum+=nums[i][j];
//         }
//         cout<<endl;
//     }
//     cout<<sum;
//    return 0;
// }


#include<bits/stdc++.h>
using namespace std;
void repeatingword(string &words){
    stringstream ss(words);
    map<string, int>ump;
    string word;
    while(ss >> word){
        ump[word]++;
    }
    for(auto ele: ump){
        if(ele.second >= 2){
            cout<<ele.first<<" "<<ele.second<<" "<<endl;
        }
    }
}
int main()
{
    string sentence;
    getline(cin , sentence);
    repeatingword(sentence);
   return 0;
}