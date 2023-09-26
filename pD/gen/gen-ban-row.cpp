#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;

const int C = 1'000'000'000;
vector<vector<int>> a;

int main(int argc, char *argv[])
{
	registerGen(argc, argv, 1);
	int n = atoi(argv[1]), m = atoi(argv[2]), c = atoi(argv[3]);
	int fill = 1;
	bool ban[4] = {};
	string s = argv[4];

	a.resize(n + 1, vector<int>(m + 1, 0));

	while (c--)
	{
		vector<int> v(n - 1, 0);
		v.resize(m + n - 2, 1);
		shuffle(v.begin(), v.end());
		int i = 1, j = 1;
		a[1][1] = 1;
		for (auto k : v)
		{
			if (k == 0)
				i++;
			else
				j++;
			a[i][j] = 1;
		}
	}
	for (int i = 1; i <= n; i++)
	{
		int l = m + 1, r = -1;
		for (int j = 1; j <= m; j++)
			if (a[i][j])
				l = min(l, j), r = max(r, j);
		if (fill)
			for (int j = l; j <= r; j++)
				a[i][j] = 1;
	}
	for (auto ch : s)
	{
		switch (ch)
		{
		case 'r':
			for (int i = 1; i <= m; i++)
				a[1][i] = 0;
			break;
		case 'R':
			for (int i = 1; i <= m; i++)
				a[n][i] = 0;
			break;
		case 'c':
			for (int i = 1; i <= n; i++)
				a[i][1] = 0;
			break;
		case 'C':
			for (int i = 1; i <= n; i++)
				a[i][m] = 0;
			break;
		}
	}
	cout << n << ' ' << m << '\n';
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			cout << (a[i][j] ? 1 : -1) << " \n"[j == m];
	return 0;
}
