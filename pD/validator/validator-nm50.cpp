#include "testlib.h"
using namespace std;

const int maxN = 50, maxC = 1'000'000'000;

int main(int argc, char* argv[]) 
{
	registerValidation(argc, argv);
	
	int n = inf.readInt(1, maxN, "n");
	inf.readSpace();
	int m = inf.readInt(1, maxN, "m");
	inf.readEoln();
	ensure(n * m <= maxN);

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
		{
			inf.readInt(-maxC, maxC, "a");
			if (j == m)
				inf.readEoln();
			else 
				inf.readSpace();
		}
	inf.readEof();

	return 0;
}
