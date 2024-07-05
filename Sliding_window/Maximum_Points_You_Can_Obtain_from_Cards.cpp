/*
    Input:
            9 4
            6 2 3 4 7 2 1 7 1
    Output:
            16

    Explanation:

            Tc: 0(2N)
            Sc: 0(1)

*/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
using namespace std;
ll fun(ll arr[], ll k, ll n)
{
    ll lsum = 0;
    for (ll i = 0; i < k; i++)
        lsum += arr[i]; // sum of first k index
    ll rsum = 0, mxsum = lsum, rind = n - 1;
    for (ll i = k - 1; i >= 0; i--)
    {
        lsum -= arr[i];    // remove first index wise
        rsum += arr[rind]; // add last index wise
        rind--;            // decrease right index wise
        mxsum = max(mxsum, lsum + rsum);
    }
    return mxsum;
}
void solve()
{
    ll n, k;
    cin >> n >> k;
    ll arr[n];
    for (ll i = 0; i < n; i++)
        cin >> arr[i];
    cout << fun(arr, k, n);
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
