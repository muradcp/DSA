/*
    Brute force solution

    TC: 0(n^2)
*/

#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
using namespace std;
void solve()
{
    ll n, k;
    cin >> n >> k;
    ll arr[n];
    for (ll i = 0; i < n; i++)
        cin >> arr[i];
    ll mxsum = 0;
    for (ll i = 0; i + k <= n; i++)   //  0(n)
    {
        ll sum = 0;
        for (ll j = i; j < k + i; j++)       //0(n)
        {
            sum += arr[j];
        }
        mxsum = max(mxsum, sum);
    }
    cout << mxsum << nl;
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









 

/*
      Optimal solution

        TC: 0(N)
*/

#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
using namespace std;
void solve()
{
    ll n, k;
    cin >> n >> k;
    ll arr[n];
    for (ll i = 0; i < n; i++)
        cin >> arr[i];
    ll sum = 0;
    for (ll i = 0; i < k; i++)  // sum of firt k element
        sum += arr[i];
    ll l = 0, r = k - 1, mxsum = sum;
    while (r < n - 1)
    {
        sum -= arr[l];
        l++;
        r++;
        sum += arr[r];
        mxsum = max(mxsum, sum);
    }
    cout << mxsum << nl;
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
