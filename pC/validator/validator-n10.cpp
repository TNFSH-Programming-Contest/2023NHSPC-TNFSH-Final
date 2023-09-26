#include "testlib.h"
using namespace std;

const int maxN = 10;

int main(int argc, char* argv[]) {
	registerValidation(argc, argv);

	inf.readInt(1, maxN, "N");
	inf.readEoln();
	inf.readEof();

	return 0;
}
