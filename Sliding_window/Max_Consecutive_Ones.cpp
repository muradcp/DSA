/*
    Input
            11 2
            1 1 1 0 0 0 1 1 1 0
    Output
            6
*/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
using namespace std;
void dbg(ll x)
{
    cout << x << nl;
}
void optimal()
{
    ll n, k;
    cin >> n >> k;
    ll arr[n];
    for (ll i = 0; i < n; i++)
        cin >> arr[i];
    ll mxlen = 0, len = 0, i = 0, j = 0, zero = 0;
    while (j < n)
    {
        if (arr[j] == 0)
            zero++;
        if (zero <= k)
        {
            len = j - i + 1;
            mxlen = max(mxlen, len);
            if (zero == k)
            {
                i = j;
                zero = 1;
            }
        }
        j++;
    }
    cout << mxlen << nl;
}
void brute_force()
{
    ll n, k;
    cin >> n >> k;
    ll arr[n];
    for (ll i = 0; i < n; i++)
        cin >> arr[i];
    ll mxlen = 0, zero;
    for (ll i = 0; i < n; i++)
    {
        zero = 0;
        for (ll j = i; j < n; j++)
        {
            if (arr[j] == 0)
                zero++;
            if (zero <= k)
            {
                ll len = j - i + 1;
                mxlen = max(mxlen, len);
            }
            else
            {
                break;
            }
        }
    }
    cout << mxlen << nl;
}
void solve()
{
    brute_force();
    // optimal();
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
