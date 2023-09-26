#include "testlib.h"
using namespace std;

const int maxN = 100'000, maxC = 1'000'000'000;

int main(int argc, char* argv[]) 
{
	registerValidation(argc, argv);
	
	int n = inf.readInt(1, maxN, "n");
	inf.readSpace();
	int m = inf.readInt(1, maxN, "m");
	inf.readEoln();
	ensure(n * m <= maxN);

	bool one = 0;

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
		{
			int a = inf.readInt(-1, 1, "a");
			ensure(a != 0);
			if (a == 1)
				one = 1;

			if (j == m)
				inf.readEoln();
			else 
				inf.readSpace();
		}
	inf.readEof();
	ensure(one > 0);
	return 0;
}
