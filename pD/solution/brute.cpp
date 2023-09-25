#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, m;
ll a[55][55], dp[55][55][55];

int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			cin >> a[i][j];

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
				dp[i][j][k] = -1e18;
				for (int p = j; p <= k; p++)
					sum += a[i][p];
				for (int p = 1; p <= m; p++)
					for (int q = p; q <= m; q++)
						if (p <= j && j <= q && q <= k)
							dp[i][j][k] = max(dp[i][j][k], dp[i - 1][p][q] + sum);
			}
	}
	ll ans = -1e18;
	for (int j = 1; j <= m; j++)
		ans = max(ans, dp[n][j][m]);
	cout << ans << '\n';
}
