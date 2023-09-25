#include <bits/stdc++.h>
#define ll long long
#define pll pair<ll, ll>
#define F first
#define S second
using namespace std;

const ll B = 33'000;

ll N;

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
    {
        cur = (cur * 10 + 1) % N;
        if (cur == 0)
        {
            cout << i << '\n';
            return 0;
        }
    }
}