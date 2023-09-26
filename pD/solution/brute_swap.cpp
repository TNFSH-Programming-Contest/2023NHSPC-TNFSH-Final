#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, m;
ll a[2005][2005], dp[2][2005][2005];

int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			if (n < m)
				cin >> a[j][i];
			else
				cin >> a[i][j];
	if (n < m)
		swap(n, m);

	for (int j = 0; j <= m; j++)
		for (int k = 0; k <= m; k++)
			dp[0][j][k] = -1e18;
	dp[0][1][1] = 0;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
			for (int k = j; k <= m; k++)
			{
				ll sum = 0;
				dp[i % 2][j][k] = -1e18;
				for (int p = j; p <= k; p++)
					sum += a[i][p];
				for (int p = 1; p <= m; p++)
					for (int q = p; q <= m; q++)
						if (p <= j && j <= q && q <= k)
							dp[i % 2][j][k] = max(dp[i % 2][j][k], dp[(i - 1) % 2][p][q] + sum);
			}
	}
	ll ans = -1e18;
	for (int j = 1; j <= m; j++)
		ans = max(ans, dp[n % 2][j][m]);
	cout << ans << '\n';
}
