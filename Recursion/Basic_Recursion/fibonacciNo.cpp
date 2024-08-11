#include <bits/stdc++.h>
using namespace std;
int fib(int n)
{
    if (n <= 1)
    {
        return n;
    }
    int last = fib(n-1);
    int sLast = fib(n-2);
    return last + sLast;

}
int main()
{
    cout<<fib(4);
    return 0;
}