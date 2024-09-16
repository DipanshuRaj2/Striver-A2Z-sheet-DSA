#include <bits/stdc++.h>
using namespace std;
class Queue{
    public:
    stack<int>s1;
    stack<int>s2;
    void Push(int x){
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop(); 
        }
    }
    void Pop(){
        s1.pop();
    }
    int Front(){
        return s1.top();
    }
    int Size(){
        return s1.size();
    }
};
int main()
{
    Queue qe;
    qe.Push(10);
    qe.Push(20);
    qe.Push(30);
    qe.Push(40);
    cout<<"Top Element of Queue: "<<qe.Front()<<endl;
    qe.Pop();
    qe.Pop();
    cout<<"Top Element of Queue: "<<qe.Front()<<endl;
    cout<<"Size of Queue: "<<qe.Size()<<endl;
    return 0;
}