/*#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
  //brute force  
  // give tle 102/400 test case
    int maxLen(vector<int>& arr, int n) {
        // Your code here
        if(n == 1 && arr[0] == 0) return 1;
        int maxi = 0;
        for(int i = 0; i<n-1; i++){
            int sum = arr[i]; 
            for(int j = i+1; j<n; j++){
                sum += arr[j];
                if(sum == 0){
                    int len = j - i + 1;
                    maxi = max(maxi, len);
                }   
            }
        }
        return maxi;
    }
    //optimal approach 

    int maxLen1(vector<int>&arr, int n){
        int maxi = 0;
        int sum = 0;
        int sI = -1; int endI = -1;
        unordered_map<int, int>ump; //(store prefixSum, index)
        for(int i = 0; i<arr.size(); i++){
           sum += arr[i];
            if(sum == 0){
                maxi = i + 1;
                sI = 0;
                endI = i;
            }
            else{
                if(ump.find(sum) != ump.end()){
                    int len = i - ump[sum];
                    if(len > maxi){
                        maxi = len;
                        sI = ump[sum]+1;
                        endI = i;
                    }
                }
                else{
                    ump[sum] = i;
                }
            }
        }
        for(int i = sI; i<=endI; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        return maxi;
    }
};
int main(){
    Solution* sol = new Solution();
    vector<int>arr = {15,-2,2,-8,1,7,10,23};
    int n = arr.size();
    cout<<"maximum length: "<<sol->maxLen1(arr, n);
    cout<<endl;
    return 0;
}*/

//binary serach
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0; int high = nums.size()-1;

        while(low <= high){
            int mid = (low + high)/2;
            if(nums[mid] == target){
                // return nums[mid];
                return mid;
            }
            else if(nums[mid]< target){
                low = mid + 1;
            }
            else{
                high = mid -1; 
            }
        }
        return -1;
    }
    int lowerBound(vector<int>&nums, int target){
        int low = 0; int high = nums.size()-1;
        int ans = nums.size();
        while(low <= high){
            int mid = (low + high)/2;
            if(nums[mid] >= target){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid+1;
            }
        }
        return low; //ans same
    }
    int upperBound(vector<int>& nums, int target){
        int low = 0; int high = nums.size()-1;
        while(low <= high){
            int mid = (low+high)/2;
            if(nums[mid] <= target){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return low;
    }
};
int main(){
    vector<int>nums = {1, 2, 2, 3, 3, 5};
    int target = 2; //o/p = 1
    Solution* sol = new Solution();
    // cout<<sol->search(nums, target);
    // cout<<sol->lowerBound(nums, target);
    cout<<sol->upperBound(nums, target);
 return 0;
 }