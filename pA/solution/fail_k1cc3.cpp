#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, m, k, vis[80004];
vector<int> E[80004];
vector<int> cc;

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
	}
	for (int i = 1; i <= n; i++)
		if (!vis[i])
			cc.emplace_back(dfs(i));
	if (k == 1)
	{
		if (cc.size() > 2)
			cout << 0 << '\n';
		if (cc.size() == 2)
			cout << 0 << '\n';
		if (cc.size() == 1)
			cout << (n * (n - 1) / 2 - m) << '\n';
	}
	else
	{
		if (cc.size() > 3)
			cout << 0 << '\n';
		if (cc.size() == 3)
			cout << cc[0] * cc[1] * cc[0] * cc[2] +
						cc[1] * cc[0] * cc[1] * cc[2] +
						cc[2] * cc[1] * cc[2] * cc[0]
				 << '\n';
		if (cc.size() == 2)
		{
			int cross = cc[0] * cc[1], inside = cc[0] * (cc[0] - 1) / 2 + cc[1] * (cc[1] - 1) / 2 - m;
			cout << cross * (cross - 1) / 2 + cross * inside << '\n';
		}
		if (cc.size() == 1)
		{
			int e = n * (n - 1) / 2 - m;
			cout << e * (e - 1) / 2 << '\n';
		}
	}
}
