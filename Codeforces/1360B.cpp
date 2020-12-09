/*
** Author: MAC45
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //freopen("input.txt", "rt", stdin);
    //freopen("output.txt","wt",stdout);
    ll t, tc = 0;
    cin >> t;
    while (t--)
    {
        ll n, minv = 1000;
        cin >> n;
        ll s[n];
        for (ll i = 0; i < n; i++)
            cin >> s[i];
        sort(s, s + n);
        for (ll i = 1; i < n; i++)
        {
            if (s[i] - s[i - 1] < minv)
                minv = s[i] - s[i - 1];
        }
        cout << minv << endl;
    }
    return 0;
}
