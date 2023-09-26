#include <bits/stdc++.h>
#define pii pair<int, int>
#define F first
#define S second
using namespace std;

int N, Q, c[300005], vis[300005];

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    cin >> N >> Q;
    for (int i = 1; i <= N; i++)
        cin >> c[i];

    for (int i = 1; i <= Q; i++)
    {
        int l, r, x, ans = 0;
        cin >> l >> r >> x;

        if (i <= 500)
            for (int j = l; j <= r; j++)
            {
                if (vis[c[j]] < i)
                    vis[c[j]] = i, ans++;
                c[j] = 1;
            }
        else
        {
            int b = min(r, l + 50);
            for (int j = l; j <= b; j++)
            {
                if (c[j] != 1)
                    b = min(r, j + 50);
                if (vis[c[j]] < i)
                    vis[c[j]] = i, ans++;
                c[j] = 1;
            }
            b = max(l, r - 50);
            for (int j = r; j >= b; j--)
            {
                if (c[j] != 1)
                    b = max(l, j - 50);
                if (vis[c[j]] < i)
                    vis[c[j]] = i, ans++;
                c[j] = 1;
            }
        }
        cout << ans << '\n';
    }
}