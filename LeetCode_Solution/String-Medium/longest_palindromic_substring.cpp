// brute force approach in this 72/144 test case pase
// #include<bits/stdc++.h>
// using namespace std;
// class Solution{
//     public:
//       string longestPalindrome(string &str){
//         if(str.length()==1){
//             return str;
//         }
//         int n = str.length()-1;
//         vector<string>substring;
//         string ans = "";
//         int count = 0; 
//         for(int i = 0; i<=n; i++){
//             for(int j = i; j<=n; j++){
//                 substring.push_back(str.substr(i , j-i+1));

//                 string str1 = substring[count];
                
//                 int s = 0; int end = str1.length()-1;

//                 bool isPalindrome = true;
//                 while(s <= end){

//                     if(str1[s] != str1[end]){
//                         isPalindrome = false;
//                         break;
//                     }

//                     s++; end--;
//                 }
//                 if(isPalindrome && str1.length() >= ans.length()){
//                     ans = str1;
//                 }
//                 count++;
//             }
//         }
//         return ans;
//       }
// };
// int main()
// {
//     Solution sol;
//     string str = "whdqcudjpisufnrtsyupwtnnbsvfptrcgvobbjglmpynebblpigaflpbezjvjgbmofejyjssdhbgghgrhzuplbeptpaecfdanhlylgusptlgobkqnulxvnwuzwauewcplnvcwowmbxxnhsdmgxtvbfgnuqdpxennqglgmspbagvmjcmzmbsuacxlqfxjggrwsnbblnnwisvmpwwhomyjylbtedzrptejjsaiqzprnadkjxeqfdpkddmbzokkegtypxaafodjdwirynzurzkjzrkufsokhcdkajwmqvhcbzcnysrbsfxhfvtodqabvbuosxtonbpmgoemcgkudandrioncjigbyizekiakmrfjvezuzddjxqyevyenuebfwugqelxwpirsoyixowcmtgosuggrkdciehktojageynqkazsqxraimeopcsjxcdtzhlbvtlvzytgblwkmbfwmggrkpioeofkrmfdgfwknrbaimhefpzckrzwdvddhdqujffwvtvfyjlimkljrsnnhudyejcrtrwvtsbkxaplchgbikscfcbhovlepdojmqybzhbiionyjxqsmquehkhzdiawfxunguhqhkxqdiiwsbuhosebxrpcstpklukjcsnnzpbylzaoyrmyjatuovmaqiwfdfwyhugbeehdzeozdrvcvghekusiahfxhlzclhbegdnvkzeoafodnqbtanfwixjzirnoaiqamjgkcapeopbzbgtxsjhqurbpbuduqjziznblrhxbydxsmtjdfeepntijqpkuwmqezkhnkwbvwgnkxmkyhlbfuwaslmjzlhocsgtoujabbexvxweigplmlewumcone";
//     cout<<str.length();
//     cout<<sol.longestPalindrome(str);
//    return 0;
// }


//optimal approach
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool checkPalindrome(string &s, int i, int j){
        while(i <= j){
            if(s[i] != s[j]){
                return false;
            }
            else{
                i++;
                j--;
            }
        }
        return true;
    }
    string longestPalindrome(string s){
        int n = s.length();
        int maxLength = 0; 
        int sp = 0;
        for(int i = 0; i<n; i++){
            for(int j = i; j<n; j++){
                if(checkPalindrome(s , i, j) == true){
                     if(j - i + 1 > maxLength){
                        maxLength = j - i + 1;
                        sp = i;
                     }
                }
            }
        }
        return s.substr(sp,maxLength);
    }
};
int main()
{
    Solution sol;
    cout<<sol.longestPalindrome("baba");
   return 0;
}