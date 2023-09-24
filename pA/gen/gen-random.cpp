#include <bits/stdc++.h>
#define pii pair<int, int>
#define F first
#define S second
#include "testlib.h"
using namespace std;

int main(int argc, char* argv[]) 
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	registerGen(argc, argv, 1);
	int n = atoi(argv[1]), m = atoi(argv[2]), k = atoi(argv[3]);
	cout << n << ' ' << m << ' ' << k << '\n';
	vector<pii> e;
	if (n * (n - 1) / 2 <= 1e7)
	{
		vector<pii> v;
		for (int i = 1; i <= n; i++)
			for (int j = i + 1; j <= n; j++)
				v.emplace_back(i, j);
		shuffle(v.begin(), v.end());
		e = vector<pii>(v.begin(), v.begin() + m);
	}
	else 
	{
		map<pii, int> mp;
		while(e.size() < m)
		{
			int u = rnd.next(1, n), v = rnd.next(1, n);
			if (u == v)
				continue;
			if (u > v)
				swap(u, v);
			if (mp[pii(u, v)])
				continue;
			mp[pii(u, v)] = 1;
			e.emplace_back(u, v);
		}
	}


	vector<int> perm(n + 1);
	for (int i = 1; i <= n; i++)
		perm[i] = i;
	shuffle(perm.begin() + 1, perm.end());
	for (auto &[u, v] : e)
	{
		u = perm[u], v = perm[v];
		if (u > v)
			swap(u, v);
		cout << u << ' ' << v << '\n';
	}
	return 0;
}
