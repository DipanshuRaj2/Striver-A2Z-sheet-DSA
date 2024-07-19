#include <bits/stdc++.h>
using namespace std;
int countTheFrequency(int L, int U, int X)
{
    int count = 0;
    for (int i = L; i < U; i++)
    {
        int ans = i;
        if (ans % 10 == X)
            count++;

        while (ans != 0)
        {
            ans = ans / 10;
            if (ans % 10 == X)
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    int L, U, X;
    cin >> L >> U >> X;
    cout << countTheFrequency(L, U, X);

    return 0;
}