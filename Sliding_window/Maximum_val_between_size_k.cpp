/*
    TC :   0(n)
    SC :   0(n)

    https://www.geeksforgeeks.org/sliding-window-maximum-maximum-of-all-subarrays-of-size-k/

*/

#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
using namespace std;
void dbg(ll x)
{
    cout << x << " ";
}
void solve()
{
    ll n, k;
    cin >> n >> k;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<ll> v;
    ll f = 0, p = k - 1, l = n - 1;
    while (p <= l)
    {
        ll val = *max_element(arr + f, arr + p + 1);
        // dbg(val);
        v.push_back(val);
        f++;
        p++;
    }
    for (auto it : v)
        cout << it << " ";
}
int main()
{
    int tc = 1;
    // cin>>tc;
    for (int i = 1; i <= tc; i++)
    {
        // cout<<"Case #"<<i<<": ";
        solve();
    }
    return 0;
}
