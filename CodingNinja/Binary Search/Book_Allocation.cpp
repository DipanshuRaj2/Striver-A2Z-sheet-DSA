// #include<bits/stdc++.h>
// using namespace std;
// int bookAllocation(vector<int>& arr, int pages){
//     int cntStu = 1; int currentPage = 0;
//     for(int i = 0; i<arr.size(); i++){
//         if(currentPage + arr[i] <= pages){
//             currentPage += arr[i];
//         }
//         else{
//             cntStu++;
//             currentPage = arr[i];
//         }
//     }
//     return cntStu;
// }

// int findPages(vector<int>& arr, int n, int m){
//     int maxi = INT_MIN; int sum = 0;
//     for(int i = 0; i<arr.size(); i++){
//         maxi = max(maxi, arr[i]);
//         sum += arr[i];
//     }
//     for(int pages = maxi; pages<= sum; pages++){
//        int cntStu = bookAllocation(arr, pages);
//             if(cntStu == m){
//                 return pages;
//         }
//     }
// }
// int main()
// {
//     vector<int>arr = {25,46,28,49,24};
//     int m = 4;
//     int n = arr.size();
//     cout<<findPages(arr, n, m);
//    return 0;
// }

// this code take more time O(n^2);
// so we use binary search to optimise the code that is O(n logn)

#include <bits/stdc++.h>
using namespace std;
int bookAllocation(vector<int> &arr, int pages)
{
    int currentPages = 0;
    int cntStu = 1;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] + currentPages <= pages)
        {
            currentPages += arr[i];
        }
        else if (arr[i] + currentPages > pages)
        {
            cntStu++;
            currentPages = arr[i];
        }
    }
    return cntStu++;
}
int findPages(vector<int> arr, int n, int stu)
{
    n = arr.size();
    if (stu > n)
    {
        return -1;
    }
    int maxi = INT_MIN;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, arr[i]);
        sum += arr[i];
    }
    int low = maxi;
    int high = sum;
    int ans = 0;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        int cntStu = bookAllocation(arr, mid);
        if (cntStu <= stu)
        {
            ans = mid;
            high = mid - 1;
        }
        else if (cntStu > stu)
        {
            low = mid + 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> arr = {25, 46, 28, 49, 24};
    int m = 4;
    int n = arr.size();
    cout << findPages(arr, n, m);
    return 0;
}