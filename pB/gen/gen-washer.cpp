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
    int n = opt(1), q = opt(2), c = opt(3), w = opt(4);
    cout << n << " " << q << '\n';
    for (int i = 1; i <= n; i++)
        cout << rnd.next(1, c) << " \n"[i == n];

    for (int i = 1; i <= q; i++)
    {
        int l, r, x = rnd.next(1, c);
        if (rnd.next(0, w))
        {
            l = rnd.wnext(1, n, -10);
            r = rnd.wnext(1, n, 10);
        }
        else
        {
            l = rnd.next(1, n);
            r = rnd.next(l, min(l + 5, n));
        }
        if (l > r)
            swap(l, r);
        cout << l << " " << r << " " << x << '\n';
    }
    return 0;
}
