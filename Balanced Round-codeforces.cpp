
#include <bits/stdc++.h>
#define ll long long int
#define nline '\n'
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;

    ll arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    ll curr = 1, total = 0;
    sort(arr, arr + n);

    for (int i = 0; i < n - 1; i++)
    {
        if (abs(arr[i] - arr[i + 1]) <= k)
            curr++;
        else
        {
            total = max(total, curr);
            curr = 1;
        }
    }

    total = max(total, curr);

    cout << n - total << nline;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll T = 1;
    cin >> T;
    while (T--) 
    {
        solve();
    }

}
