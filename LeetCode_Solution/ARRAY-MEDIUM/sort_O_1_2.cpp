// #include<bits/stdc++.h>
// using namespace std;
// void sort_0_1_2(vector<int>&v){
//     int count0 = 0;
//     int count1 = 0;
//     int count2 = 0;
//     // vector<int>ans;
//     for(int i = 0; i<v.size(); i++){
//         if(v[i] == 0){
//             count0++;
//         }
//         else if(v[i]==1){
//             count1++;
//         }
//         else if(v[i]==2){
//             count2++;
//         }
//     }
//     for(int i = 0; i<count0; i++){
//         v[i] =0;
//     }
//     for(int i = count0; i<count0+count1;i++){
//         v[i]=1;
//     }
//     for(int i = count0+count1; i<v.size(); i++){
//         v[i]=2;
//     }

// }
// int main()
// {
//     vector<int>nums = {2, 2, 2, 2, 0, 0, 1, 0};
//     sort_0_1_2(nums);
//     for(int i = 0; i<nums.size(); i++){
//         cout<< nums[i]<<" ";
//     }

//     return 0;
// }

//dutch National flag Algorithm
#include<bits/stdc++.h>
using namespace std;
void sort_0_1_2(vector<int>&arr){
    int n = arr.size();
    int low = 0;
    int mid = 0;
    int high = n-1;

    while(mid<=high){
        if(arr[mid]== 0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else if(arr[mid]==2){
            swap(arr[mid], arr[high]);
            high--;
            
        }
    }
}
int main()
{
    vector<int>nums = {2, 2, 2, 2, 0, 0, 1, 0};
    sort_0_1_2(nums);
    for(int i = 0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}
// hello how are you