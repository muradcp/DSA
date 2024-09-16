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

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    priority_queue<pair<int, int>> pq;
    for (int i = 0; i < k - 1; i++)
        pq.push({arr[i], i});
    vector<int> ans;
    for (int i = k - 1; i < n; i++)
    {
        pq.push({arr[i], i});
        while (pq.top().second < i - k + 1)
            pq.pop();
        ans.push_back(pq.top().first);
    }
    for (auto it : ans)
        cout << it << " ";
    cout << endl;
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
