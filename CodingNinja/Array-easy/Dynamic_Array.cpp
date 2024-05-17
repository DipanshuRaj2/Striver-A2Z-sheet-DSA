// #include<bits/stdc++.h>
// using namespace std;
// int* printDivisors(int n, int &size){
//     int* divisors = new int[n];
//     size = 0;
//     for(int i = 1; i<= n; i++){
//         if(n % i == 0){
//             divisors[size++] = i;
//         }
//     }
//     return divisors;
// }
// int main()
// {
//    const int num=10;
//     int *res=printDivisors(10, num);
//     cout<<res;
//    return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int countBits(int n){
//     vector<int>ans;
//     while(n != 0){
//         int digit = n % 2;
//         ans.push_back(digit); 
//         n = n/2;
//     }
//     reverse(ans.begin(), ans.end());
//         // for(int i = ans.size()-1; i>=0; i--){
//     //     cout<<ans[i];
//     // }
//     string ansELe ="";
//     for(int ele: ans){
//          ansELe += to_string(ele);
//     }
//     int ans1  = stoi(ansELe);
//     return ans1;
// }
// int main()
// {

//     cout<<countBits(4);
//    return 0;
// }