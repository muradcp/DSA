/*

8 3 2
7 7 7 7 13 11 12 7

TRUE
*/







#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
using namespace std;
#define vl vector<ll>
const ll md = 1000000007;

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
int fun(vector<int> &arr, int day, int k, int m)
{
    int n = arr.size(), cnt = 0, ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] <= day)
        {
            cnt++;
        }
        else
        {
            ans += (cnt / k);
            cnt = 0;
        }
    }
    ans += cnt / k;
    return ans >= m;
}
void solve()
{
    int n, k, m;
    cin >> n >> k >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int fst = *min_element(a.begin(), a.end());
    int lst = *max_element(a.begin(), a.end());
    if (n < k * m)
        cout << "False" << nl;
    for (int i = fst; i <= lst; i++)
    {
        if (fun(a, i, k, m))
        {
            cout << "True" << nl;
            return;
        }
    }
    cout << "False" << nl;
}
int main()
{
    ll tc = 1;
    //cin >> tc;
    for (int i = 1; i <= tc; i++)
    {
        solve();
    }
    return 0;
}



//using BInary Search

#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
using namespace std;
#define vl vector<ll>
const ll md = 1000000007;

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
int fun(vector<int> &arr, int day, int k, int m)
{
    int n = arr.size(), cnt = 0, ans = 0;
    for (int i = 0; i < n - 1; i++)   // O(N)
    {
        if (arr[i] <= day)
        {
            cnt++;
        }
        else
        {
            ans += (cnt / k);
            cnt = 0;
        }
    }
    ans += cnt / k;
    return ans >= m;
}
void solve()
{
    int n, k, m;
    cin >> n >> k >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int fst = *min_element(a.begin(), a.end());
    int lst = *max_element(a.begin(), a.end());
    if (n < k * m)
        cout << "False" << nl;
    int ans = lst, lw = fst, hg = lst, md;
    while (lw <= hg)
    {
        md = (lw + hg) / 2;
        if (fun(a, md, k, m))
        {
            ans = md;
            hg = md - 1;
        }
        else
        {
            lw = md + 1;
        }
    }
    cout<<ans<<" "<<lw<<endl;
    cout <<(ans|lw)<< nl;
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

