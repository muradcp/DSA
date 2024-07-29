/*
Input:
        6 3
        1 6 4 2 5 3
        0 3
        1 4
        2 5
Output:
        12
        11
        10

Describe:
        arr------ 1   6   4    2    5     3
        pref------1   7   11   13   18    21

*/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
using namespace std;
#define vl vector<ll>
vl psum(const vl &arr, ll n)
{
    vl pref(n + 1);
    // for(ll i=0;i<n;i++)
    // {
    //     pref[i]=pref[i-1]+arr[i];
    // }
    partial_sum(arr.begin(), arr.end(), pref.begin());
    return pref;
}
void solve()
{
    ll n, t;
    cin >> n >> t;
    vl arr(n);
    for (ll i = 0; i < n; i++)
        cin >> arr[i];
    vl narr = psum(arr, n);
    while (t--)
    {
        ll l, r;
        cin >> l >> r;
        cout << narr[r] - narr[l] << nl;
    }
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
