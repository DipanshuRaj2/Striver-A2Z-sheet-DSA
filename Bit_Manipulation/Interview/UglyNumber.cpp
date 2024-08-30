#include<bits/stdc++.h>
using namespace std;

 bool checkprime(int n)
    {
        if(n<2) return false;
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                return false;
            }
        }
        return true;
    }

    bool isUgly(int n) {
    if(n<=0) return false;
    vector<int>ans;
      if(n == 1)return true;
      for(int i=1;i<=(n);i++)
      {
        if(n%i==0) 
        {
            if(checkprime(i))
            {
                ans.push_back(i);
            }
            if(i!=n/i)
            {
                if(checkprime(n/i))  ans.push_back(n/i);
            }
        }
      }

        for(auto it:ans)
        {
            cout<<it<<" ";
            if(it==2 || it==3 || it==5) continue;
            else return false;
        }
      return true;
    }

int main(){
cout<<isUgly(1641);
 return 0;
 }