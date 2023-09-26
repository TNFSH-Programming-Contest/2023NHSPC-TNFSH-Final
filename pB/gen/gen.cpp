#include "testlib.h"
#include <bits/stdc++.h>
 
using namespace std;


int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);

	auto opt = [&](int k)
	{
		return atoi(argv[k]);
	};

    int n=opt(1),q=opt(2),c=opt(3),L=opt(4),R=opt(5);
    cout<<n<<" "<<q<<'\n';
    for (int i=1;i<=n;i++){
        int r=rnd.next(1,c);
        cout<<r<<" \n"[i==n];
    }
    for (int i=1;i<=q;i++){
        int l=rnd.next(1,n-R+1),r=rnd.next(l+L-1,n),cc=rnd.next(1,c);
        cout<<l<<' '<<r<<" "<<cc<<'\n';
    }
    return 0;
}
