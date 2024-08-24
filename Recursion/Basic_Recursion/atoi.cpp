// first of all try to normal method then i try to do with recursion
#include <bits/stdc++.h>
using namespace std;
static bool check(char &ch){
    if(ch <= 'z' && ch >= 'a'){
        return false;
    }
    if(ch == '.' || ch == '-'){
        return false;
    }
    return true;
}
int myAtoi(string &str)
{
    int i = 0;
    long long ans = 0;
    int po = 1;
    str.erase(remove(str.begin(), str.end(), ' '),str.end());
    if(str[0] == '-'){
        i++;
    }
    while (i < str.size())
    { 
        if(str[i]== ' '){
            i++;
            continue;
        }
        if(str[i] == '+'){
            i++;
            continue;
        }
        if(!check(str[i])){
            break;
        }
        ans += str[i] - '0';
        i++;
        
         ans = ans * 10;
    }
    ans = ans / 10;
    if(str[0] == '-'){
        ans = -1 * ans;;
    }
    if(ans > INT_MAX)
      ans = INT_MAX;
    if(ans < INT_MIN){
        ans = INT_MIN;
    }
    int res = ans;
      return res;
  }
int main()
{
    string str = "-+123";
    cout << myAtoi(str);
    return 0;
}