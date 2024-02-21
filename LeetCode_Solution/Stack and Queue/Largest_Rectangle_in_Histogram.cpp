/*Given an array of integers heights representing the histogram's bar height where the width of each bar is 1, return the area of the largest rectangle in the histogram.

 

Example 1:


Input: heights = [2,1,5,6,2,3]
Output: 10
Explanation: The above is a histogram where width of each bar is 1.
The largest rectangle is shown in the red area, which has an area = 10 units.




                                     naive approach using array*/
// #include<bits/stdc++.h>
// using namespace std;
// class Solution{
//     public:
//     int largestRectangleArea(vector<int>& arr){
//         int res = 0;
//         for(int i = 0; i<arr.size(); i++){
//             int curr = arr[i];
//             for(int j = i-1; j>=0; j--){
//                 if(arr[j]>=arr[i]){
//                     curr += arr[i]; 
//                 }
//                 else
//                 break;
//             }

//             for(int j = i+1; j<arr.size(); j++){
//                 if(arr[j]>= arr[i]){
//                     curr += arr[i];
//                 }
//                 else
//                 break;
//             }
//             res = max(curr, res);
//         }
//         return res;
//     }
// };
// int main()
// {
//     Solution sol;
//     vector<int>v ={6,2,5,4,1,5,6};
//     cout<<sol.largestRectangleArea(v);
//    return 0;
// }

                            // stack
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:

    vector<int>previous_Smaller(vector<int>&heights){
        vector<int>ans;
        stack<int>st;
        int n = heights.size();
        for(int i = 0; i<n; i++){
            while(!st.empty()&&heights[st.top()]>=heights[i]){
                st.pop();
            }
            int ele = (st.empty())? -1: st.top();
            ans.push_back(ele);
            st.push(i);

        }
        return ans;

    }
    vector<int>next_Greater(vector<int>&heights){
        vector<int>ans;
        stack<int>st;
        int n = heights.size();
        for(int i = n-1; i>=0; i--){
            while(!st.empty()&&heights[st.top()]>=heights[i]){
                st.pop();
            }
            int ele = (st.empty()) ? n:st.top();
            ans.push_back(ele);
            st.push(i);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        int res = 0;
        vector<int>ps = previous_Smaller(heights);
        vector<int>ns = next_Greater(heights);
        for(int i = 0; i<n; i++){
            int curr  =(ns[i]-ps[i] -1) * heights[i];
            res = max(res,curr);
        }
        return res;
    }
};
int main()
{
    Solution sol;
    vector<int>v ={6,2,5,4,1,5,6};
    cout<<sol.largestRectangleArea(v);//10
   return 0;
}

                    
