#include <bits/stdc++.h>
#define SerajOmar    ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define ll           long long int
#define ld           long double
#define dl            double
using namespace std;

#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

template<typename T>
using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

template<typename T>
using o_mset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

vector<pair<ll,ll>> di = {{0,1},{1,0},{0,-1},{-1,0}};
const ll mod=1e9+7;
const ll inf=2e18+1;

void solve()
{
    ll n,x;cin>>n>>x;
    deque<ll>d(n);
    for(auto& i:d)
        cin>>i;
    d.push_front(0);
    d.push_back(x);

    ll Max=0;
    for (int i = 1; i <= n+1; ++i) {
        Max=max(Max,(i==n+1)?2*(d[i]-d[i-1]):d[i]-d[i-1]);
    }
    cout<<Max<<'\n';
}
int main()
{
    SerajOmar
xed<<setprecision(15);
    ll t=1;
    cin>>t;
    while (t--){solve();}
    return 0;
}
