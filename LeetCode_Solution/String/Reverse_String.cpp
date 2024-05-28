// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
//     public:
//     void reverseString(vector<char>& s){
//         int n = s.size();

//         vector<char>ans;
//         for(int i = n-1; i>= 0; i--){
//             ans.push_back(s[i]);
//         }
//         for(int i = 0; i<n; i++){
//             cout<<ans[i]<<" ";
//         }
//     }
// };
// int main()
// {
//     Solution sol;
//     vector<char>ch = {'h','e','l','l','o'};
//     sol.reverseString(ch);
//    return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
//     public:
//     void reverseString(vector<char>& s){
//         reverse(s.begin(), s.end());
//     }
// };
// int main()
// {
//     Solution sol;
//     vector<char>ch = {'h','e','l','l','o'};
//     sol.reverseString(ch);
//    return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
//     public:
//     void reverseString(vector<char>& s){
//         int n = s.size();
//         int i = 0;

//         while(i < n/2){
//             swap(s[i] , s[n - i - 1]);
//             i++;
//         }
//         for(int i = 0; i<n; i++){
//             cout<<s[i]<<" ";
//         }
//     }
// };
// int main()
// {
//     Solution sol;
//     vector<char>ch = {'h','e','l','l','o'};
//     sol.reverseString(ch);
//    return 0;
// }