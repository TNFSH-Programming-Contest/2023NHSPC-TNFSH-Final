#include <bits/stdc++.h>
#define ll long long
#define pll pair<ll, ll>
#define F first
#define S second
using namespace std;

ll N;

ll fpow(int p)
{
    ll a = 10 % N, b = 1 % N, r = 0;
    while (p)
    {
        if (p & 1)
            r = (a * r + b) % N;
        b = (b * a + b) % N;
        a = a * a % N;
        p >>= 1;
    }
    return r;
}


signed main()
{
    cin >> N;
    ll cur = 0;
    if (__gcd(N, 10LL) != 1)
    {
        cout << -1 << '\n';
        return 0;
    }

    for (int i = 1; i <= N; i++)
        if (fpow(i) == 0)
        {
            cout << i << '\n';
            return 0;
        }
}