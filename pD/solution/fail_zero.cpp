#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<vector<ll>> a;
ll dp[2][400][400];

int main()
{
	int n, m;
	cin >> n >> m;
	a.resize(max(n, m) + 1, vector<ll>(min(n, m) + 1, 0));
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			if (n < m)
				cin >> a[j][i];
			else
				cin >> a[i][j];
	if (n < m)
		swap(n, m);

	for (int i = 1; i <= n; i++)
	{
		int t = i & 1;
		for (int j = 2; j <= m; j++)
			for (int k = j; k <= m; k++)
				dp[t ^ 1][j][k] = max(dp[t ^ 1][j][k], dp[t ^ 1][j - 1][k]);
		for (int j = 1; j <= m; j++)
		{
			// avaliable: l in [1, j] and r in [j, k]
			ll pref = 0, sum = 0;
			for (int k = j; k <= m; k++)
			{
				pref = max(pref, dp[t ^ 1][j][k]);
				sum += a[i][k];
				dp[t][j][k] = pref + sum;
			}
		}
	}
	ll ans = 0;
	for (int j = 1; j <= m; j++)
		ans = max(ans, dp[n & 1][j][m]);
	cout << ans << '\n';
}
