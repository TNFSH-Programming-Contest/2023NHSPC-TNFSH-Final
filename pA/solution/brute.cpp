#include <bits/stdc++.h>
#define ull unsigned long long
#define ll long long
using namespace std;

int n, m, k, adj[170][170], vis[170];
vector<int> E[170];
vector<ll> cc;

int dfs(int u)
{
    vis[u] = 1;
    int sz = 1;
    for (auto v : E[u])
        if (!vis[v])
            sz += dfs(v);
    return sz;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    cin >> n >> m >> k;
    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        E[u].emplace_back(v);
        E[v].emplace_back(u);
        adj[u][v] = 1;
    }
    int ans = 0;
    if (k == 1)
        for (int i = 1; i <= n; i++)
            for (int j = i + 1; j <= n; j++)
                if (!adj[i][j])
                {
                    E[i].emplace_back(j);
                    E[j].emplace_back(i);
                    for (int p = 1; p <= n; p++)
                        vis[p] = 0;
                    if (dfs(1) == n)
                        ans++;
                    E[i].pop_back();
                    E[j].pop_back();
                }
    if (k == 2)
        for (int i = 1; i <= n; i++)
            for (int j = i + 1; j <= n; j++)
                for (int a = i; a <= n; a++)
                    for (int b = (i == a ? j + 1 : a + 1); b <= n; b++)
                        if (!adj[i][j] && !adj[a][b])
                        {
                            E[i].emplace_back(j);
                            E[j].emplace_back(i);
                            E[a].emplace_back(b);
                            E[b].emplace_back(a);
                            for (int p = 1; p <= n; p++)
                                vis[p] = 0;
                            if (dfs(1) == n)
                                ans++;
                            E[i].pop_back();
                            E[j].pop_back();
                            E[a].pop_back();
                            E[b].pop_back();
                        }
    cout << ans << '\n';
}
