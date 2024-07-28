/*
        TC:  0(max(arr)*log(max(arr)))


Input:
        4 8
        3 6 7 11

Output:
        4


*/

#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
using namespace std;
ll fun(ll arr[], ll k, ll n)
{
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ans += ceil((double)arr[i] / (double)k);
    }
    return ans;
}
void solve()
{
    ll n, hr;
    cin >> n >> hr;
    ll arr[n];
    for (ll i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    ll time, sol = 0;
    ll mx = *max_element(arr, arr + n);
    /*
    BRUTE FORCE
        for (ll i = 1; i <= mx; i++)
        {
            time = fun(arr, i, n);
            if (time <= hr)
            {
                sol = i;
                break;
            }
        }
     */

    /*
    OPTIMAL SOLUTION
    
        ll lw = 1, md, time, ans;
        while (lw <= hg)
        {
            md = (lw + hg) / 2;
            //dbg(md);
            time = fun(arr, md, n);
            if (time <= hr)
            {
                ans = md;
                hg = md - 1;
            }
            else
                lw = md + 1;
        }

    */
    cout << sol << nl;
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
