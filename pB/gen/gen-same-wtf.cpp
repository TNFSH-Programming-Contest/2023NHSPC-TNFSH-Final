#include "testlib.h"
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[])
{
    registerGen(argc, argv, 1);
    auto opt = [&](int k)
    {
        return atoi(argv[k]);
    };
    int n = opt(1), q = opt(2), L = opt(3), R = opt(4);

    cout << n << ' ' << q << '\n';
    for (int i = 1; i <= n; i++)
        cout << rnd.next(1, n) << " \n"[i == n];

    for (int i = 1; i <= q; i++)
    {
        int l, r;
        if (q - i <= 100)
            l = rnd.next(1, n), r = rnd.next(1, n);
        else if (rnd.next(0, 1))
            l = rnd.next(1, L), r = rnd.next(1, L);
        else 
            l = rnd.next(R, n), r = rnd.next(R, n);

        if (r < l)
            swap(l, r);
        cout << l << ' ' << r << " " << 1 << '\n';
    }
    return 0;
}
