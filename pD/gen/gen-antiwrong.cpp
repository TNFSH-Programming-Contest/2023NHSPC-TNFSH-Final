#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;

const int C = 1'000'000'000;
vector<vector<int>> a;

int main(int argc, char *argv[])
{
	registerGen(argc, argv, 1);
	int n = atoi(argv[1]), m = atoi(argv[2]);
	a.resize(n + 1, vector<int>(m + 1, 0));

	cout << n << ' ' << m << '\n';

	vector<int> split;
	for (int i = 1; i <= n - 1; i++)
		split.emplace_back(rnd.next(1, m));
	split.emplace_back(0);
	split.emplace_back(m);
	sort(split.begin(), split.end());
	for (int i = 1; i <= n; i++)
	{
		for (int j = split[i - 1] + 1; j <= split[i]; j++)
			a[i][j] = 1;
		for (int j = 1; j <= m; j++)
			cout << (a[i][j] ? 1 : -1) << " \n"[j == m];
	}
	return 0;
}
