#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<vector<int>> dp;;

int main()
{
	int n, m;
	cin >> n >> m;
	dp.resize(n + 1, vector<int>(m + 1, -1e18));
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
				cin >> dp[i][j];
	dp[0][1] = dp[1][0] = 0;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + dp[i][j];
	cout << dp[n][m] << '\n';
}
