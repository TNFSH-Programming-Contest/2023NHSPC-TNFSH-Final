#include <bits/stdc++.h>
#define ll long long
#define pll pair<ll, ll>
#define F first
#define S second
using namespace std;

const ll B = 33'000;

ll N, ten = 1, one = 0;
map<ll, int> mp;


signed main()
{
    cin >> N;
    ll cur = 0;
    mp[0] = 0;
    if(__gcd(N, 10LL) != 1)
    {
        cout << -1 << '\n';
        return 0;
    }
    for (int i = 1; i <= B; i++)
    {
        cur = (cur * 10 + 1) % N;
        ten = ten * 10 % N;
        if(mp.find(cur) != mp.end())
        {
            cout << i << '\n';
            return 0;
        }
        mp[cur] = i;
    }
    one = cur;
    for (int i = 2 * B; i <= N + B; i += B)
    {
        cur = (cur * ten + one) % N;
        if(mp.find(cur) != mp.end())
        {
            //cout << i << ' ' << cur << ' ' << mp[cur] << '\n';
            cout << i - mp[cur] << '\n';
            return 0;
        }     
    }
}