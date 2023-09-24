#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<vector<ll>> a;
ll dp[400][400];

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
		for (int j = 1; j <= m; j++)
			a[i][j] += a[i][j - 1];

	for (int j = 0; j <= m; j++)
		for (int k = 0; k <= m; k++)
			if (k < j)
				dp[j][k] = -1e18;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
			for (int k = j; k <= m; k++)
				dp[j][k] = max({dp[j][k], dp[j - 1][k], dp[j][k - 1]});
		for (int j = 1; j <= m; j++)
			for (int k = j; k <= m; k++)
				dp[j][k] += a[i][k] - a[i][j - 1];
	}
	for (int j = 1; j <= m; j++)
		for (int k = j; k <= m; k++)
			dp[j][k] = max({dp[j][k], dp[j - 1][k], dp[j][k - 1]});
	cout << dp[m][m] << '\n';
}
