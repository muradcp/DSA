#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
using namespace std;
void optimal()
{
    ll n, k;
    cin >> n >> k;
    ll arr[n];
    for (ll i = 0; i < n; i++)
        cin >> arr[i];
    map<ll, ll> mp;
    ll mxlen = 0, lft = 0, rgt = 0;
    while (rgt < n)
    {
        mp[arr[rgt]]++;
        if (mp.size() > k)
        {
            mp[arr[lft]]--;
            if (mp[arr[lft]] == 0) // use chatgpt to understand
                mp.erase(arr[lft]);
            lft++;
        }
        if (mp.size() <= k)
            mxlen = max(mxlen, rgt - lft + 1);
        rgt++;
    }
    cout << mxlen << nl;
}
void brute()
{
    ll n, k;
    cin >> n >> k;
    ll arr[n];
    for (ll i = 0; i < n; i++)
        cin >> arr[i];
    ll mxlen = 0;
    for (ll i = 0; i < n; i++)
    {
        set<ll> st;
        for (ll j = i; j < n; j++)
        {
            st.insert(arr[j]);
            if (st.size() <= k)
                mxlen = max(mxlen, j - i + 1);
            else 
                break;
        }
    }
    cout << mxlen << nl;
}
void solve()
{
    brute();
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
