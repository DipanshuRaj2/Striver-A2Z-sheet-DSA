#include <bits/stdc++.h>
using namespace std;
class Queue
{
public:
    int maxSize = 10;
    int current = 0; // track the number of element in the queue;
    int queue[10];
    int start = -1; // pop opertion perform
    int end = -1;   // push operation perform

    void push(int x)
    {
        if (current == maxSize)
            cout << "overflow";
        if (current == 0)
        {
            start = 0;
            end = 0;
        }
        else // end goes through out of index then end goes to 0 index
        {
            end = (end + 1) % maxSize;
        }
        queue[end] = x;
        current = current + 1;
    }
    int pop()
    {
        if (current == 0)
            cout << "underflow";
        int ele = queue[start];
        if (current == 1)
        {
            start = end = -1;
        }
        else // when start goes to out of index then it goes 0 index
        {
            start = (start + 1) % maxSize;
        }
        current = current - 1;
        return ele;
    }
    int front()
    {
        if (current == 0)
            cout << "underflow";
        int x = queue[start];
        return x;
    }
    int Size()
    {
        return current;
    }
};
int main()
{
    Queue qe;
    qe.push(1);
    qe.push(2);
    qe.push(3);
    cout<<qe.queue[0]<<endl;
    cout<<qe.pop()<<endl;
    
    cout << "size of queue: " << qe.Size() << endl;
    cout << "top element of queue: " << qe.front() << endl;
    cout << "pop element of queue: " << qe.pop() << endl;
    cout << "size after pop the element: " << qe.Size();
    return 0;
}