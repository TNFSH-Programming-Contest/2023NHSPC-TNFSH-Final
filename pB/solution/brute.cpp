#pragma GCC optimize("Ofast,unroll-loops,O3")
#pragma GCC target("avx,avx2,sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,fma,tune=native")
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
int n,arr[N],q;
bool vis[N];
vector<int>vt;
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>q;
    for (int i=1;i<=n;i++)
        cin>>arr[i];
    while (q--){
        int l,r,c,ans=0; cin>>l>>r>>c;
        for (int i=l;i<=r;i++){
            ans+=(vis[arr[i]]==0);
            vis[arr[i]]=1;
        }
        cout<<ans<<'\n';
        for (int i=l;i<=r;i++){
            vis[arr[i]]=0;
            arr[i]=c;
        }
    }
}
