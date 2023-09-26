#include <bits/stdc++.h>
#define pii pair<int, int>
#define F first
#define S second
using namespace std;

int N, Q, vis[300005];
map<pii, int> mp;
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    cin >> N >> Q;
    for (int i = 1; i <= N; i++)
    {
        int c;
        cin >> c;
        mp[pii(i, i)] = c;
    }
    mp[pii(N + 1, N + 1)] = 0;
    for (int i = 1; i <= Q; i++)
    {
        int l, r, x, ans = 0;
        cin >> l >> r >> x;
        vector<pair<pii, int>> v;
        v.emplace_back(make_pair(pii(l, r), x));
        auto iter = prev(mp.lower_bound(pii(l, N + 1)));
        while (iter->F.F <= r)
        {
            if (vis[iter->S] < i)
                ans++, vis[iter->S] = i;
            if (iter->F.F < l)
                v.emplace_back(make_pair(pii(iter->F.F, l - 1), iter->S));
            if (iter->F.S > r)
                v.emplace_back(make_pair(pii(r + 1, iter->F.S), iter->S));
            iter = mp.erase(iter);
        }
        for (auto [k, p] : v)
            mp[k] = p;
        cout << ans << '\n';
    }
}