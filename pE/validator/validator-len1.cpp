#include "testlib.h"
using namespace std;

const int maxT = 50000;

int main(int argc, char *argv[])
{
	registerValidation(argc, argv);
	int T = inf.readInt(1, maxT, "T");
	inf.readEoln();
	while (T--)
	{
		string s = inf.readString();
		string t = inf.readString();
		ensuref(s.size() <= 1, "len s");
		ensuref(t.size() <= 1, "len t");
		for (auto c : s)
			ensuref(c == 'b' || c == 'p' || c == 'd' || c == 'q', "char s");
		for (auto c : t)
			ensuref(c == 'b' || c == 'p' || c == 'd' || c == 'q', "char t");
	}
	inf.readEof();
	return 0;
}
