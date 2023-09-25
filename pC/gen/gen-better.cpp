#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;

int main(int argc, char *argv[])
{
	registerGen(argc, argv, 1);

	int A = atoi(argv[1]), B = atoi(argv[2]);
	int C = 0;
	do
	{
		C = rnd.next(A, B);
	} while (__gcd(C, 10) != 1);

	cout << C << endl;

	return 0;
}
