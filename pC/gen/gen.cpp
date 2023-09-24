#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;

int main(int argc, char* argv[]) {
	registerGen(argc, argv, 1);

	int A = atoi(argv[1]), B = atoi(argv[2]);
	cout << rnd.next(A, B) << endl;

	return 0;
}
