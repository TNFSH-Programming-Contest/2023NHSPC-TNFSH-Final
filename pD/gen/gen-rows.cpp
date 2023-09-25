#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;

const int C = 1'000'000'000;
vector<vector<int>> a;

int main(int argc, char *argv[])
{
	registerGen(argc, argv, 1);
	int n = atoi(argv[1]), m = atoi(argv[2]), increasing = atoi(argv[3]);
	a.resize(n + 1, vector<int>(m + 1, 0));

	cout << n << ' ' << m << '\n';
	int ll = 1, lr = 1;
	for (int i = 1; i <= n; i++)
	{
		int l = (increasing ? rnd.next(ll, min(m, ll + (int)(1.7 * m / n))) : rnd.next(1, m)),
			r = (increasing ? rnd.next(l, min(m, max(l, lr) + (int)(1.7 * m / n))) : rnd.next(1, m));
		if (l > r)
			swap(l, r);
		if (i == 1)
			l = 1;
		if (i == n)
			r = m;
		ll = l, lr = r;
		for (int j = l; j <= r; j++)
			a[i][j] = 1;
		for (int j = 1; j <= m; j++)
			cout << (a[i][j] ? 1 : -1) << " \n"[j == m];
	}
	return 0;
}
