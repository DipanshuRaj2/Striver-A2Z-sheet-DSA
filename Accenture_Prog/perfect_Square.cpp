/*Ques 1. A start up wants to expand their empire so the CEO decided to purchase plots at
various locations. He has already figured out some plots and now he is busy, so he wants that
you will select some plots that are square shaped.

Write a code, to help your CEO for finding the all square shaped
Plots.

Input: First line of input will have the total shortlisted plots by the CEO

Second line represents N space separated integers denoting the area of the plots.

Output: Find out how many plots are there to build a new office

Example:
Input: 6
64 16 38 81 50 100

Output: 4

*/
#include <bits/stdc++.h>
using namespace std;
/*
bool check(int n){
    for(int i = 0; i<n/2; i++){
        if(i*i == n) return true;
    }
    return false;
}
int perfectSquare(vector<int>&arr){
    int cnt = 0;
    for(int i = 0; i<arr.size(); i++)
    {
        if(check(arr[i])) cnt++;
    }
    return cnt;
}*/
int perfectSquare(vector<int>&arr){
    int cnt = 0;
    for(int i  = 0; i<arr.size(); i++){
        if(floor(double(sqrt(arr[i]))) == ceil(double(sqrt(arr[i])))) cnt++;
    }
    return cnt;
}
int main()
{
    vector<int>arr = {64, 16, 38, 81, 50, 100};
    cout<<perfectSquare(arr);
    return 0;
}
