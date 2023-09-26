#pragma GCC optimize("Ofast,unroll-loops,O3")
#pragma GCC target("avx,avx2,sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,fma,tune=native")
#include<bits/stdc++.h>
//#include<bits/extc++.h>
//#pragma pack(1)
#define pii pair<int,int>
#define x first
#define y second
using namespace std;
//using namespace __gnu_pbds;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
//typedef tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update> order_multiset;
//typedef tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> order_set;
struct segtree{
    bitset<1200015>seg,tag,have;
    void push(int i){
        if (have[i]){
            tag[2*i]=tag[2*i+1]=seg[2*i]=seg[2*i+1]=tag[i];
            have[2*i]=have[2*i+1]=have[i];
            have[i]=0;
        }
    }
    void modify(int l,int r,int i,int ll,int rr,bool c){
        if (ll<=l&&rr>=r){
            seg[i]=1; tag[i]=1; have[i]=1;
            return;
        }
        int mid=(l+r)>>1; push(i);
        if (rr<=mid) modify(l,mid,2*i,ll,rr,c);
        else if (ll>mid) modify(mid+1,r,2*i+1,ll,rr,c);
        else {
            modify(l,mid,2*i,ll,rr,c);
            modify(mid+1,r,2*i+1,ll,rr,c);
        }
        seg[i]=(seg[2*i]|seg[2*i+1]);
    }
    int query(int l,int r,int i,int ll,int rr){
        if (ll<=l&&rr>=r){
            bool tmp=seg[i];
            have[i]=1; tag[i]=0; seg[i]=0;
            return tmp;
        }
        int mid=(l+r)>>1; push(i);
        bool res=0;
        if (rr<=mid) res=query(l,mid,2*i,ll,rr);
        else if (ll>mid) res=query(mid+1,r,2*i+1,ll,rr);
        else res=(query(l,mid,2*i,ll,rr)|query(mid+1,r,2*i+1,ll,rr));
        seg[i]=(seg[2*i]|seg[2*i+1]);
        return res;
    }
};
segtree seg[11];
int n,q;
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>q;
    for (int i=1;i<=n;i++){
        int c; cin>>c;
        seg[c].modify(1,n,1,i,i,1);
    }
    while (q--){
        int l,r,c,ans=0; cin>>l>>r>>c;
        for (int i=1;i<=10;i++)
            ans+=seg[i].query(1,n,1,l,r);
        seg[c].modify(1,n,1,l,r,1);
        cout<<ans<<"\n";
    }
}
