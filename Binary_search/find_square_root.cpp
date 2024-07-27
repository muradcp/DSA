/*
Input: 45
output: 6

*/

#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
using namespace std;
void solve()
{
    ll n;cin>>n;
    ll lw=1,hg=n,md,ans;
    while(lw<=hg)
    {
        md=(lw+hg)/2;
        if(md*md<=n){
            ans=md;
            lw=md+1;
        }
        else 
        { 
            hg=md-1;
        }           
    }
    cout<<ans<<nl;
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
