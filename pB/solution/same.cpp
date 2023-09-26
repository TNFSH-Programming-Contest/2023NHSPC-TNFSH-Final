//#pragma GCC optimize("Ofast,unroll-loops,O3")
//#pragma GCC target("avx,avx2,sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,fma,tune=native")
#include<bits/stdc++.h>
//#include<bits/extc++.h>
//#pragma pack(1)
#define int long long
#define pii pair<int,int>
#define x first
#define y second
#define N 300015
using namespace std;
//using namespace __gnu_pbds;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
//typedef tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update> order_multiset;
//typedef tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> order_set;
set<int>st;
int arr[N],n,q;
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>q;
    for (int i=1;i<=n;i++){
        cin>>arr[i];
        st.insert(i);
    }
    while (q--){
        int l,r,c,cnt=0; cin>>l>>r>>c;
        auto it=st.lower_bound(l);
        vector<int>vt;
        while (it!=st.end()&&(*it)<=r){
            vt.push_back(arr[*it]);
            it=st.erase(it);
            cnt++;
        }
        if (cnt!=(r-l+1))
            vt.push_back(c);
        sort(vt.begin(),vt.end());
        cout<<unique(vt.begin(),vt.end())-vt.begin()<<'\n';
    }
}
