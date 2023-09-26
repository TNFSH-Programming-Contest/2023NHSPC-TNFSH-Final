#include "testlib.h"
using namespace std;

const int maxN = 20, maxM = 2'000'000;

int main(int argc, char* argv[]) {
	registerValidation(argc, argv);
	map<pair<int, int>, int> mp;
	int n = inf.readInt(1, maxN, "n");
	inf.readSpace();
	int m = inf.readInt(0, maxM, "m");
	inf.readSpace();
	int k = inf.readInt(1, 2, "k");
	inf.readEoln();
	ensuref(m <= n * (n - 1) / 2, "why not?");

	for (int i = 1; i <= m; i++)
	{
		int u = inf.readInt(1, n, "u");
		inf.readSpace();
		int v = inf.readInt(1, n, "v");
		inf.readEoln();
		ensuref(u < v, "edge condition");
		ensuref(mp[{u, v}] == 0, "edge condition");
		mp[{u, v}] = 1;
	}
	inf.readEof();

	return 0;
}
