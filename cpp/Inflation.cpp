#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        long long p[n];
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
        }
        long long check = p[0], count = 0;
        for (int i = 1; i < n; i++)
        {
            if (p[i] * 100 > k * check)
            {
                long long temp;
                if ((p[i] * 100) % k == 0)
                {
                    temp = (p[i] * 100) / k;
                }
                else
                {
                    temp = ((p[i] * 100) / k) + 1;
                }
                count += temp - check;
                check = temp;
            }
            check += p[i];
        }
        cout << count << "\n";
    }
    return 0;
}