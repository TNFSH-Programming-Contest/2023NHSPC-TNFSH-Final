#include "testlib.h"
using namespace std;

const int maxNQ = 300'000;

int main(int argc, char *argv[])
{
	registerValidation(argc, argv);

	int n = inf.readInt(1, maxNQ, "n");
	inf.readSpace();
	int q = inf.readInt(1, maxNQ, "q");
	inf.readEoln();
	for (int i = 1; i <= n; i++)
	{
		inf.readInt(1, n, "x");
		if (i == n)
			inf.readEoln();
		else 
			inf.readSpace();
	}
	for (int i = 1; i <= q; i++)
	{
		int l = inf.readInt(1, n, "l");
		inf.readSpace();
		int r = inf.readInt(1, n, "r");
		inf.readSpace();
		int x = inf.readInt(1, n, "x");
		inf.readEoln();
		ensure(l <= r);
	}
	inf.readEof();

	return 0;
}
