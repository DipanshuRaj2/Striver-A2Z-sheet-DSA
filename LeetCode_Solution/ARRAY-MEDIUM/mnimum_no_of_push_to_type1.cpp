#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumPushes(string word) {
       unordered_map<int, int> ump;
       int assign_key = 2;
        int result = 0;
       for(char &ch : word){

            if(assign_key > 9){
                 assign_key = 2;
            }
           
           ump[assign_key]++;
           result = result + ump[assign_key];
           assign_key++;
       }
       return result;
    }
};
int main()
{
    Solution Solution;
    string str = "xyzxyzxyzxyz";
    cout<< Solution.minimumPushes(str);
    return 0;
}