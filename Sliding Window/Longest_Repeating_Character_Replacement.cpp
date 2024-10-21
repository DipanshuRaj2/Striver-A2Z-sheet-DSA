#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
   // wrong approach i have pass the test case 38 test case out of 46
   // it has not passed the test case s = "ABBB" and k = 2;
   // o/p = 3 and corrected o/p= 4;
    int characterReplacement(string s, int k) {
        int maxi = 0; 
        for(int i = 0; i<s.length(); i++){
            int cnt = 0;
            for(int j = i; j<s.length(); j++){
                if(s[i] != s[j]){
                    cnt++;
                }
                if(cnt <= k){
                    int len = j - i + 1;
                    maxi = max(maxi, len);
                }
                else if(cnt > k) break;
            }
        }
        return maxi;
    }
    //corrected brute force approach
   int characterReplacement1(string s, int k){
        int maxi = 0;
        for(int i = 0; i<s.size(); i++){
            vector<int>arr(26, 0); int maxf = 0;
            for(int j = i; j<s.size(); j++){
                arr[s[j] - 'A']++;
                maxf = max(maxf, arr[s[j] - 'A']);
                int len = j - i + 1;
                int changes = len - maxf;
                if(changes <= k){
                    maxi = max(maxi, len);
                }
                else break;
            }
        }
        return maxi;
    }
    int characterReplacement2(string &s, int k){
        int maxi = 0; int maxf = 0;

        int l = 0; int r = 0;
        vector<int>arr(26, 0);
        while(r < s.size()){
            arr[s[r] - 'A']++;
            maxf = max(maxf, arr[s[r]- 'A']);
            int len = r - l + 1;
            int changes = len - maxf;
            if(changes > k){
                arr[s[l] - 'A']--;
                maxf = 0;
                for(int i = 0; i<26; i++){
                    maxf = max(maxf, arr[i]);
                }
                l++;
            }
            if(changes <= k){
                maxi = max(maxi, len);
            }
            r++;
        }
        return maxi;
    }
};
int main(){
    string s = "ABBB"; int k = 2;
    Solution* sol = new Solution();
    cout<<sol->characterReplacement2(s, k);

   return 0;
}