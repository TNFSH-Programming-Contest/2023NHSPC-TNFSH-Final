#include <bits/stdc++.h>
#define ll long long
#define pll pair<ll, ll>
#define F first
#define S second
using namespace std;

int N, Q, seg[1200000], lazy[1200000];

void apply(int i, int val)
{
    seg[i] = lazy[i] = val;
}

void push(int i)
{
    if (lazy[i])
        apply(i << 1, lazy[i]), apply(i << 1 | 1, lazy[i]);
    lazy[i] = 0;
}

void modify(int mL, int mR, int val, int i = 1, int L = 1, int R = N)
{
    if (mL <= L && R <= mR)
        apply(i, val);
    else if(R < mL || mR < L)
        return;
    else 
    {
        int mid = (L + R) / 2;
        push(i);
        modify(mL, mR, val, i << 1, L, mid);
        modify(mL, mR, val, i << 1 | 1, mid + 1, R);
        seg[i] = seg[i << 1] | seg[i << 1 | 1];
    }
}

int query(int qL, int qR, int i = 1, int L = 1, int R = N)
{
    if (qL <= L && R <= qR)
        return seg[i];
    else if (R < qL || qR < L)
        return 0;
    else 
    {
        int mid = (L + R) / 2;
        push(i);
        return query(qL, qR, i << 1, L, mid) | query(qL, qR, i << 1 | 1, mid + 1, R);
    }
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    cin >> N >> Q;
    for (int i = 1; i <= N; i++)
    {
        int c;
        cin >> c;
        assert(c <= 10);
        modify(i, i, 1 << c);
    }
    for (int i = 1; i <= Q; i++)
    {
        int l, r, x;
        assert(x <= 10);
        cin >> l >> r >> x;
        cout << __builtin_popcount(query(l, r)) << '\n';
        modify(l, r, 1 << x);
    }
}