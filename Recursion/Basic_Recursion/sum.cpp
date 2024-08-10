// #include <bits/stdc++.h>
// using namespace std;
// int add = 0;
// int sum(int i, int n){

//     if(i > n){
//         return add;
//     }
//     add = add + i;
//     sum(i+1 , n);
// }
// int main()
// {
//     cout<<sum(1, 10);
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int sum(int n){
    if(n == 0){
        return 0;
    }
    return n + sum(n-1);
}
int main()
{

    cout<<sum(5);
    return 0;
}