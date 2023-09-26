#include <bits/stdc++.h>
#define ll long long
#define pll pair<ll, ll>
#define F first
#define S second
using namespace std;


ll N;

ll fpow(ll p)
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

const ll B = 100'000;
vector<int> factor(ll M)
{
    vector<int> f;
    for (int i = 2; i <= min(M, B); i++)
        while(M % i == 0)
            f.emplace_back(i), M /= i;
    if (M > 1)
        f.emplace_back(M);
    return f;
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

    vector<int> f = factor(9 * N);
    ll phi = 9 * N;
    f.resize(unique(f.begin(), f.end()) - f.begin());
    for (auto p : f)
        phi = phi / p * (p - 1);
    f = factor(phi);
    f.resize(unique(f.begin(), f.end()) - f.begin());
    for (auto p : f)
        while(phi % p == 0 && fpow(phi / p) == 0)
            phi /= p;
    cout << phi << '\n';
}