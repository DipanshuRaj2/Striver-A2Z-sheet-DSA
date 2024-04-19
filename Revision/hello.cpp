// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     for(int i = 0; i<100; i++){
//         if(i % 2 == 0){
//             cout<<"Hello world \n";
//         }
//         else{
//             cout<<"dlrow olleH \n";
//         }
//     }
//    return 0;
// }
//optimised solution

// #include<bits/stdc++.h>
// using namespace std;
// int fibonacciSum(int n){

//    if(n <=1){
//     return n;
//    }
//     int fsum = fibonacciSum(n-2);
//     int lsum = fibonacciSum(n-1);
//     return fsum + lsum;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     cout<<fibonacciSum(n);
//    return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int fibonacciSeries(int n ){
//     int fib1 = 0;
//     int fib2 = 1;
//     for(int i = 2; i<=n; i++){
//         int next = fib1+fib2;
//         fib1 = fib2;
//         fib2 = next;
//         cout<<fib2 <<" ";
//     }
//     return fib2;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     cout<<fibonacciSeries(n);
//    return 0;
// }

//print the spiral matrix

#include<bits/stdc++.h>
using namespace std;
vector<int>storeSpiral(vector<vector<int>>mat){
    vector<int>ans;
    int n = mat.size(); // row
    int m = mat[0].size();// col
    

    int left = 0; int right = m-1;
    int top = 0; int bottom = n-1;

    while(left<=right && top <= bottom){
        for(int i = left; i<= right;i++){
            ans.push_back(mat[top][i]);
           
        }
         top++;
        for(int i = top; i<=bottom; i++){
            ans.push_back(mat[i][right]);\
          
        }
          right--;
        if(top <= bottom){
            for(int i = right; i >= left; i--){
                ans.push_back(mat[bottom][i]);
            }
            bottom--;
        }
        if(left <= right){
            for(int i = bottom; i >= top;i--){
                ans.push_back(mat[i][left]); 
            }
            left++;
        }
    }
    return ans;

}
int main()
{
    vector<vector<int>>mat = {{1, 2, 3, 4},
                             {5, 6, 7, 8},
	                         {9, 10, 11, 12},
		                     {13, 14, 15, 16}};
    vector<int>ans = storeSpiral(mat);
    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
   return 0;
}