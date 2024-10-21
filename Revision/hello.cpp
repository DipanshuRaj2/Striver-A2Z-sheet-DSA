// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//    vector<int> arr= {4,3,0,5,1,2};
//    // for(int i = 0; i<arr.size(); i++){
//    //    int temp = arr[arr[i]];
//    //    arr[arr[i]] = arr[i];
//    //    arr[i]  = temp;
//    // }
//    //  for(int i = 0; i<arr.size(); i++){
//    //    cout<<arr[i]<<" ";
//    // }
//    vector<int>ans(arr.size(), -1);
//    for(int i = 0; i<arr.size(); i++){
//       int ele = arr[i];
//       ans[ele] = i;
//    }
//    for(int i = 0; i<arr.size(); i++){
//       cout<<ans[i]<<" ";
//    }
//    //
//    return 0;
// }

// longest palindrome
#include <bits/stdc++.h>
using namespace std;
bool checkPalindrome(string &s)
{
   int l = 0;
   int r = s.size() - 1;
   while (l <= r)
   {
      if (s[l] != s[r])
      {
         return false;
      }
      l++, r--;
   }
   return true;
}
int main()
{
   string s = "bab";
   cout<<checkPalindrome(s);

   return 0;
}