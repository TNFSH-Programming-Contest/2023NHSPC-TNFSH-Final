#include <bits/stdc++.h>
#define ll long long
#include "testlib.h"
using namespace std;

int main(int argc, char* argv[]) 
{
	registerChecker("pathway", argc, argv);

    int N = inf.readLong();
    int M = inf.readLong();
    bool one = 1;
    int one_cnt = 0;
    for (int i = 1; i <= N; i++)
        for (int j = 1; j <= M; j++)
        {
            int a = inf.readLong();
            if (abs(a) == 1)
                one_cnt += (a == 1);
            else 
                one = 0;
        }

	ll pans = ouf.readLong();
	ll jans = ans.readLong();

	if (one)
    {
        if ((pans == one_cnt) ^ (jans == one_cnt))
            quit(_wa);
        else 
            quit(_ok);
    }
    else 
    {
        if(pans == jans)
            quit(_ok);
        else 
            quit(_wa);
    }

	return 0;
}