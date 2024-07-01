/*
    Input
            3
            1 2 3
    Output
            1 2 3
            1 3 2
            2 1 3
            2 3 1
            3 1 2
            3 2 1

*/
/*

    Time Complexity:  N! x N
    Space Complexity:  O(N)
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
void recurPermute(vector<int> &newarr, vector<int> &myarr, vector<vector<int>> &ans, vector<bool> &ck)
{
    if (newarr.size() == myarr.size()) // base case
    {
        ans.push_back(newarr);
        return;
    }
    for (int i = 0; i < myarr.size(); i++)
    {
        if (!ck[i])
        {
            newarr.push_back(myarr[i]);
            ck[i] = true;
            recurPermute(newarr, myarr, ans, ck);
            ck[i] = false;
            newarr.pop_back();
        }
    }
}
vector<vector<int>> permute(vector<int> &myarr)
{
    vector<vector<int>> ans;
    vector<int> newarr;
    vector<bool> ck(myarr.size(), false); // boolean array (check it take before or not)
    recurPermute(newarr, myarr, ans, ck);
    return ans;
}
int32_t main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<vector<int>> sol = permute(v);
    for (int i = 0; i < sol.size(); i++)
    {
        for (int j = 0; j < sol[i].size(); j++)
            cout << sol[i][j] << " ";
        cout << endl;
    }
    return 0;
}
