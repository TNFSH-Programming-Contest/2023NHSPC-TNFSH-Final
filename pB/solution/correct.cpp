//#pragma GCC optimize("Ofast,unroll-loops,O3")
//#pragma GCC target("avx,avx2,sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,fma,tune=native")
#include<bits/stdc++.h>
//#include<bits/extc++.h>
//#pragma pack(1)
#define pii pair<int,int>
#define x first
#define y second
#define N 300015
using namespace std;
//using namespace __gnu_pbds;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
//typedef tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update> order_multiset;
//typedef tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> order_set;
int seg[4*N],tag[4*N],n,q,arr[N];
bool vis[N];
vector<int>ans;
void push(int i){
    if (!tag[i]) return;
    seg[2*i]=tag[2*i]=tag[i];
    seg[2*i+1]=tag[2*i+1]=tag[i];
    tag[i]=0;
}
void build(int l,int r,int i){
    if (l==r){
        seg[i]=arr[l];
        return;
    }
    int mid=(l+r)>>1;
    build(l,mid,2*i);
    build(mid+1,r,2*i+1);
    seg[i] = (seg[2*i]==seg[2*i+1]) ? seg[2*i] : -1;
}
void query(int l,int r,int i,int ll,int rr,int val){
    if (ll<=l&&rr>=r&&seg[i]!=-1){
        ans.push_back(seg[i]);
        seg[i]=val; tag[i]=val;
        return;
    }
    int mid=(l+r)>>1; push(i);
    if (rr<=mid) query(l,mid,2*i,ll,rr,val);
    else if (ll>mid) query(mid+1,r,2*i+1,ll,rr,val);
    else {
        query(l,mid,2*i,ll,rr,val);
        query(mid+1,r,2*i+1,ll,rr,val);
    }
    seg[i] = (seg[2*i]==seg[2*i+1]) ? seg[2*i] : -1;
}
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>q;
    for (int i=1;i<=n;i++)
        cin>>arr[i];
    build(1,n,1);
    while (q--){
        int l,r,c,res=0; cin>>l>>r>>c;
        ans.clear();
        query(1,n,1,l,r,c);
        for (auto i:ans)
            res+=(vis[i]==0),vis[i]=1;
        cout<<res<<'\n';
        for (auto i:ans)
            vis[i]=0;
        ans.clear();
    }
}
