#include <bits/stdc++.h>
using namespace std;

bool checkPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

vector<int> findPrimeFactors(int n)
{
    vector<int> ans;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (checkPrime(i))
            {
                ans.push_back(i);
            }
                if (i != n / i)
                {
                    if (checkPrime(n / i))
                    {
                        ans.push_back(n / i);
                    }
                }
            }
        }
        return ans;
    }

int main()
{
    vector<int> arr = findPrimeFactors(12246);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}