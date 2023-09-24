#include <bits/stdc++.h>
#define pii pair<int, int>
#include "jngen.h"
using namespace std;

int main(int argc, char *argv[])
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	registerGen(argc, argv, 1);
	int n = atoi(argv[1]), m = atoi(argv[2]), c = atoi(argv[3]), k = atoi(argv[4]);
	int mxN = (int)(1.2 * n / c), mxM = (int)(1.2 * m / c);
	cout << n << ' ' << m << ' ' << k << '\n';

	vector<int> perm(n + 1);
	for (int i = 1; i <= n; i++)
		perm[i] = i;
	shuffle(perm.begin() + 1, perm.end());

	vector<pii> E;
	for (int i = 1; i <= c; i++)
	{
		int pn = (i == c ? n : rnd.next(1, mxN));
		int pm = (i == c ? m : rnd.wnext(pn - 1, min(pn * (pn - 1) / 2, mxM), 10));
		cerr << pn << ' ' << pm << '\n';
		auto g = Graph::random(pn, pm).connected().g().shuffled();
		auto e = g.edges();
		for (auto [u, v] : e)
			E.emplace_back(n - u, n - v);
		n -= pn, m -= pm;
	}

	for (auto &[u, v] : E)
	{
		u = perm[u], v = perm[v];
		if (u > v)
			swap(u, v);
		cout << u << ' ' << v << '\n';
	}
}
