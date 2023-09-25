#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<vector<ll>> a;
int l[100005], r[100005];

int main()
{
    int n, m;
    cin >> n >> m;
    a.resize(n + 1, vector<ll>(m + 1, 0));
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];

    bool valid = 1;
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        l[i] = m + 1, r[i] = -1;
        for (int j = 1; j <= m; j++)
            if (a[i][j] == 1)
                l[i] = min(l[i], j), r[i] = max(r[i], j);
        if (r[i] == -1)
            valid = 0;
        for (int j = l[i]; j <= r[i]; j++)
            if (a[i][j] != 1)
                valid = 0;
            else
                sum++;
    }

    for (int i = 2; i <= n; i++)
    {
        if (l[i - 1] <= l[i] && r[i - 1] <= r[i])
            ;
        else
            valid = 0;
    }

    if (valid)
        cout << sum << '\n';
    else
        cout << 0 << '\n';
}
