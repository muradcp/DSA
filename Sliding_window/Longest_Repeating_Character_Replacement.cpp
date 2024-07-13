/*
        Input:  s=aaabbccd       k=2
        Output: 5
 */

#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
using namespace std;
void solve()
{
    string s;                                              // Declares a string variable s.
    cin >> s;                                              // Takes input for string s.
    ll k;                                                  // Declares a long long variable k.
    cin >> k;                                              // Takes input for k.
    vector<ll> v(26);                                      // Declares a vector of size 26 for counting character frequencies.
    ll lft = 0, rgt = 0, n = s.size(), ans = 0, mxcnt = 0; // Initializes left and right pointers, string length, answer, and max character count.

    while (rgt < n) // Loops while the right pointer is less than the length of the string.
    {
        v[s[rgt] - 'a']++;                   // Increments the frequency of the current character.
        mxcnt = max(mxcnt, v[s[rgt] - 'a']); // Updates the maximum frequency of any character in the current window.

        if (rgt - lft - mxcnt + 1 > k) // Checks if the number of characters to be replaced exceeds k.
        {
            v[s[lft] - 'a']--; // Decrements the frequency of the character at the left pointer.
            lft++;             // Moves the left pointer to the right.
        }

        ans = max(ans, rgt - lft + 1); // Updates the answer with the maximum length of the valid substring.
        rgt++;                         // Moves the right pointer to the right.
    }
    cout << ans << nl; // Outputs the answer followed by a newline.
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
