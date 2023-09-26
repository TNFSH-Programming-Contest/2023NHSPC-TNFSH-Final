#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;

const int C = 1'000'000'000;

int main(int argc, char* argv[]) 
{
	registerGen(argc, argv, 1);
	int n = atoi(argv[1]), m = atoi(argv[2]), c = atoi(argv[3]);
	cout << n << ' ' << m << '\n';
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			cout << (j == m && i >= c ? 1 : -1) << " \n"[j == m];
	return 0;
}
