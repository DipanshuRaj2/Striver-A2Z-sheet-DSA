#include<bits/stdc++.h>
using namespace std;

class student
{
    int id=0;
    static int cnt;
    public:
    
    void set()
    {
        cout<<"enter the id: ";
        cin>>id;
        cnt++;
    }
    void get()
    {
        cout<<"id: "<<id<<"cnt: "<<cnt<<endl;
    }
};

int student :: cnt;

int main(){

student s1,s2,s3;


 return 0;
 }