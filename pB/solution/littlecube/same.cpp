#include <bits/stdc++.h>
#define pii pair<int, int>
#define F first
#define S second
using namespace std;

int N, Q, dsu[300005], c[300005], vis[300005];

int find(int k)
{
    return k == dsu[k] ? k : dsu[k] = find(dsu[k]);
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    cin >> N >> Q;
    for (int i = 1; i <= N; i++)
        cin >> c[i];
    for (int i = 1; i <= N; i++)
        dsu[i] = i;
    for (int i = 1; i <= Q; i++)
    {
        int l, r, x, ans = 0;
        cin >> l >> r >> x;

        int pre = l;
        for (int j = l; j <= r; j++)
        {
            if (vis[c[j]] < i)
                vis[c[j]] = i, ans++;
            if (c[j] != 1)
                c[j] = 1;
            else 
                j = find(j);
            dsu[pre] = j;
            pre = j;
        }
        cout << ans << '\n';
    }
}