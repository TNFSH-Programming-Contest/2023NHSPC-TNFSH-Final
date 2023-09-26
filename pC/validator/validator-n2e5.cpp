#include "testlib.h"
using namespace std;

const int maxN = 200'000;

int main(int argc, char* argv[]) {
	registerValidation(argc, argv);

	inf.readInt(1, maxN, "N");
	inf.readEoln();
	inf.readEof();

	return 0;
}
