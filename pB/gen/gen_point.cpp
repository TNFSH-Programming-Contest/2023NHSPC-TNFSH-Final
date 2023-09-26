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
    int cnt=0,cir=rnd.next(L,R);
    for (int i=1;i<=q;i++){
        int l=rnd.next(1,n),r=l,cc=rnd.next(1,c);
        if (cnt==cir){
            l=rnd.next(1,n);
            r=rnd.next(1,n);
            if(l > r)
                swap(l, r);
            cout<<l<<" "<<r<<" "<<cc<<'\n';
            cnt=1;
        }
        else {
            cout<<l<<' '<<r<<" "<<cc<<'\n';
            cnt++;
        }
        
    }
    return 0;
}
