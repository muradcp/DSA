/*
Input
        10
        1 2 3 4 5  6 7 8 5 1
Output: 
        7

    val=8,ind=7


    logic is where     {    arr[md-1]<arr[md]>arr[md+1]    }
*/



#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
using namespace std;
ll fun(vector<ll>&arr,ll n)
{
    if(n==1)return 0;
    else if(arr[0]>arr[1])return 0;
    else if(arr[n-1]>arr[n-2]) return n-1;
    else 
    {
        ll l=1,r=n-1,md;
        while(l<=r)
        {
            md=(l+r)/2;
            if(arr[md]>arr[md-1]&&arr[md]>arr[md+1])return md;
            else if(arr[md]>arr[md-1]) l=md+1;
            else r=md-1;
        }
        return -1;
    }
    
}
void solve()
{
    ll n;
    cin>>n;
    vector<ll>arr(n);
    for(ll i=0;i<n;i++)cin>>arr[i];
    cout<<fun(arr,n)<<nl;
}
int main()
{
    int tc = 1;
    //cin >> tc;
    for (int i = 1; i <= tc; i++)
    {
        // cout<<"Case #"<<i<<": ";
        solve();
    }
    return 0;
}
