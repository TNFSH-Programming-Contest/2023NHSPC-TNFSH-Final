#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll a[5005][5005], dp[2][5005][5005];

int main()
{
	int n, m;
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
		int t = i & 1;
		for (int j = 2; j <= m; j++)
			for (int k = j; k <= m; k++)
				dp[t ^ 1][j][k] = max(dp[t ^ 1][j][k], dp[t ^ 1][j - 1][k]);
		for (int j = 1; j <= m; j++)
		{
			// avaliable: l in [1, j] and r in [j, k]
			ll pref = -1e18, sum = 0;
			for (int k = j; k <= m; k++)
			{
				pref = max(pref, dp[t ^ 1][j][k]);
				sum += a[i][k];
				dp[t][j][k] = pref + sum;
			}
		}
	}
	ll ans = -1e18;
	for (int j = 1; j <= m; j++)
		ans = max(ans, dp[n & 1][j][m]);
	cout << ans << '\n';
}
