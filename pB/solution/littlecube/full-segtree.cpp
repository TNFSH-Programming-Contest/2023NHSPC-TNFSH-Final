#include <bits/stdc++.h>
#define ll long long
#define pll pair<ll, ll>
#define F first
#define S second
using namespace std;

int N, Q, seg[1200005], vis[300005];

int query(int qL, int qR, int x, int t, int i = 1, int L = 1, int R = N)
{
    int r = 0;
    if (R < qL || qR < L)
        return 0;
    else
    {
        int mid = (L + R) / 2;
        if (seg[i])
        {
            if (vis[seg[i]] < t)
                vis[seg[i]] = t, r = 1;

            if (qL <= L && R <= qR)
                seg[i] = x;
            else
            {
                seg[i << 1] = seg[i << 1 | 1] = seg[i];
                query(qL, qR, x, t, i << 1, L, mid), query(qL, qR, x, t, i << 1 | 1, mid + 1, R);
                seg[i] = 0;
            }
        }
        else
        {
            r += query(qL, qR, x, t, i << 1, L, mid) + query(qL, qR, x, t, i << 1 | 1, mid + 1, R);
            if (qL <= L && R <= qR)
                seg[i] = x;
            else
                seg[i] = 0;
        }
    }
    return r;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    cin >> N >> Q;
    for (int i = 1; i <= 4 * N; i++)
        seg[i] = 1;
    for (int i = 1; i <= N; i++)
    {
        int c;
        cin >> c;
        query(i, i, c, 0);
    }
    for (int i = 1; i <= Q; i++)
    {
        int l, r, x;
        cin >> l >> r >> x;
        cout << query(l, r, x, i) << '\n';
    }
}