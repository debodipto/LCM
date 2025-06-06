#include <bits/stdc++.h>
#define SerajOmar    ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define ll  long long
#define loop(from,to)   for(int i=from;i<to;i++)
#define loopr(from,to)   for(int i=from;i>=to;--i)
#define loop2(from2,to2)   for(int j=from2;j<to2;j++)
#define loop3(from3,to3)   for(int k=from3;k<to3;k++)
#define all(x) x.begin(),x.end()
#define allr(x) x.rbegin(),x.rend()
#define is(x) cout<<((x)?"YES\n":"NO\n");
#define endd    '\n'
using namespace std;
vector<pair<ll,ll>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1}};
void solve()
{

    ll n,k;cin>>n>>k;

    ll o=n-(k-1),e=n-2*(k-1);
    bool odd=(o>0&&o%2),even=(e>0&&!(e%2));
    if(odd)
    {
        cout<<"YES"<<endd;
        loop(0,k-1)
            cout<<1<<' ';
        cout<<o<<endd;
    }
    else if(even)
    {
        cout<<"YES"<<endd;
        loop(0,k-1)
            cout<<2<<' ';
        cout<<e<<endd;
    }
    else
        cout<<"NO"<<endd;
}
int main()
{
    SerajOmar
    ll t=1;
    cin>>t;
    while (t--){solve();}
    return 0;
}
