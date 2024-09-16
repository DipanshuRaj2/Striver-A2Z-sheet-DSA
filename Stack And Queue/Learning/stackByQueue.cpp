#include <bits/stdc++.h>
using namespace std;
class Stack
{
public:
    queue<int> q;
    void Push(int x)
    {
        int n = q.size();
        q.push(x);

        for (int i = 1; i <= n; i++)
        {
            q.push(q.front());
            q.pop();
        }
    }
    void Pop()
    {
       q.pop();
    }
    int Top()
    {
        return q.front();
    }
    int Size()
    {
        return q.size();
    }
};
int main()
{
    Stack st;
    st.Push(4);
    st.Push(3);
    st.Push(2);
    st.Push(6);
    cout << "Top Element of Stack: " << st.Top()<<endl;
    st.Pop();
    cout << "Top Element of Stack: " << st.Top()<<endl;
    st.Pop();
    cout<<"Size of Queue: "<<st.Size()<<endl;
    return 0;
}