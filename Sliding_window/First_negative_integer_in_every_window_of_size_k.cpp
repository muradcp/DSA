// #include <bits/stdc++.h>
// #define nl '\n'
// #define ll long long
// using namespace std;
// #define vl vector<ll>
// const ll mod = 1000000007;
// void _print(int x) { cerr << x; }
// void _print(long x) { cerr << x; }
// void _print(long long x) { cerr << x; }
// void _print(unsigned x) { cerr << x; }
// void _print(unsigned long x) { cerr << x; }
// void _print(unsigned long long x) { cerr << x; }
// void _print(float x) { cerr << x; }
// void _print(double x) { cerr << x; }
// void _print(long double x) { cerr << x; }
// void _rint(char x) { cerr << ' ' << x << ' '; }
// void _print(const char *x) { cerr << '"' << x << '"'; }
// void _print(const string &x) { cerr << '"' << x << '"'; }
// void vdbg(vector<ll> &arr)
// {
//     for (auto it : arr)
//         cout << it << " ";
//     cout << nl;
// }
// void dbg(ll n)
// {
//     cout << n << " ";
//     cout << nl;
// }
// void solve()
// {
//     string s;
//     cin >> s;
//     int n = s.size(), ans = 0, lft = 0, rgt = 0;
//     int hash[256] = {0};
//     while (rgt < n)
//     {
//         if (hash[s[rgt]] != 0)
//         {
//             if (hash[s[rgt]] >= lft)
//                 lft = hash[s[rgt]] + 1;
//         }
//         ans = max(ans, rgt - lft + 1);
//         hash[s[rgt]] = rgt;
//         rgt++;
//     }
//     cout << ans << nl;
// }
// int main()
// {
//     ll tc = 1;
//     // cin >> tc;
//     for (int i = 1; i <= tc; i++)
//     {
//         solve();
//     }
//     return 0;
// }

#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
using namespace std;
#define vl vector<ll>
const ll mod = 1000000007;

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
void optimal()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < k; i++)
    {
        cout << *min_element(arr.begin() + i, arr.begin() + i + k) << " ";
    }
    for (int i = k; i < n - 1; i++)
    {
        cout << *min_element(arr.begin() + i, arr.begin() + i + k) << " ";
    }
}
void sliding()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    deque<int> dq;
    for (int i = 0; i < n; i++)
    {
        if (!dq.empty() && dq.front() < i - k + 1)
            dq.pop_front();
        if (arr[i] < 0)
            dq.push_back(i);
        if (i >= k - 1)
        {
            if (!dq.empty())
                cout << arr[dq.front()] << " ";
            else
                cout << "0" << " ";
        }
    }
}
void solve()
{
    sliding();
    optimal();
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
