#include <iostream>

using namespace std;

long long prime(long long k, long long n)
{
    long long o = n;
    while (o >= 2)
    {
        if (k % o == 0)
        {
            return o;
        }
        else
        {
            o--;
        }
    }
    return 1;
}

long long gcd(long long a, long long b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

long long findGCD(long long arr[], long long n)
{
    long long result = arr[0];
    for (long long i = 1; i < n; i++)
    {
        result = gcd(arr[i], result);
        if (result == 1)
        {
            return 1;
        }
    }
    return result;
}

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, m;
        bool odd = 0, even = 0;
        cin >> n >> m;
        long long p[m];
        for (long long i = 0; i < m; i++)
        {
            cin >> p[i];
        }
        long long o = findGCD(p, m);
        if (o <= n)
        {
            cout << n - o;
        }
        else
        {
            long long p = prime(o, n);
            cout << n - p;
        }
        cout << "\n";
    }
    return 0;
}