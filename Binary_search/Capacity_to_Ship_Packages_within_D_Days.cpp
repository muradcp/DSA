/*
10 5
1 2 3 4 5 6 7 8 9 10

output: 15

*/


// Using Brute force

#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
using namespace std;
#define vl vector<ll>
const ll mod = 1000000007;
void _print(int x) { cerr << x; }
void _print(long x) { cerr << x; }
void _print(long long x) { cerr << x; }
void _print(unsigned x) { cerr << x; }
void _print(unsigned long x) { cerr << x; }
void _print(unsigned long long x) { cerr << x; }
void _print(float x) { cerr << x; }
void _print(double x) { cerr << x; }
void _print(long double x) { cerr << x; }
void _rint(char x) { cerr << ' ' << x << ' '; }
void _print(const char *x) { cerr << '"' << x << '"'; }
void _print(const string &x) { cerr << '"' << x << '"'; }
void vdbg(vector<ll> &arr)
{
    for (auto it : arr)
        cout << it << " ";
    cout << nl;
}
void dbg(ll n)
{
    cout << n << " ";
    cout << nl;
}
int fun(vector<int> &arr, int cap)
{
    int day = 1, sm = 0, n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (sm + arr[i] > cap)
        {
            day++;
            sm = arr[i];
        }
        else
        {
            sm += arr[i];
        }
    }
    return day;
}
void solve()
{
    int n, days;
    cin >> n >> days;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int cap = *max_element(arr.begin(), arr.end());
    int sum = accumulate(arr.begin(), arr.end(), 0);
    int ans = cap;
    for (int i = cap; i <= sum; i++)
    {
        if (fun(arr, i) <= days)
        {
            ans = i;
            break;
        }
    }
    cout << ans << nl;
}
int main()
{
    ll tc = 1;
    // cin >> tc;
    for (int i = 1; i <= tc; i++)
    {
        solve();
    }
    return 0;
}
