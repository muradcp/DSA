
/*

    Input:
            9
            1 2 1 1 2 3 4 3 3
            4
            1
            2
            3
            4
    Output:
            3
            2
            3
            1

*/
#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
using namespace std;
#define vl vector<ll>
#define mod 1000000007
const ll md = 1e7 + 10;
vl vec(md, -1);

void vdbg(vector<int> &arr)
{
    for (auto it : arr)
        cout << it << " ";
    cout << nl;
    cout << nl;
}

void dbg(ll n)
{
    cout << n << " ";
    cout << nl;
}
void arry()
{
    ll n;
    cin >> n;
    ll arr[n];
    for (ll i = 0; i < n; i++)
        cin >> arr[i];
    ll hash[10] = {0};
    // map<ll,ll>mp;
    for (ll i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }
    ll t;
    cin >> t;
    while (t--)
    {
        ll a;
        cin >> a;
        cout << hash[a] << nl;
    }
}
void strng()
{
    string s;
    cin >> s;
    ll n = s.size();
    ll hash[256] = {0};
    // 256 you can get every possible ASCII charecters
    for (ll i = 0; i < n; i++)
    {
        hash[s[i] - 'a']++;
    }
    ll t;
    cin >> t;
    while (t--)
    {
        char a;
        cin >> a;
        cout << hash[a - 'a'] << nl;
    }
}
int main()
{
    ll tc = 1;
    // cin >> tc;
    for (int i = 1; i <= tc; i++)
    {
        arry();
        strng();
    }
    return 0;
}
