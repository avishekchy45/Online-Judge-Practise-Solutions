/*
** Author: MAC45
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    //freopen("input.txt", "rt", stdin);
    //freopen("output.txt", "wt", stdout);
    ll t, tc = 0;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        char a[n + 1][n + 1];
        int p, q, r, s;
        bool star = 1;
        for (ll i = 1; i <= n; i++)
        {
            for (ll j = 1; j <= n; j++)
            {
                cin >> a[i][j];
                if (a[i][j] == '*')
                {
                    if (star)
                        p = i, q = j, star = 0;
                    else
                        r = i, s = j;
                }
            }
        }
        if (p == r && p < n)
            a[n][q] = '*', a[n][s] = '*';
        else if (p == r && p == n)
            a[1][q] = '*', a[1][s] = '*';
        else if (q == s && q < n)
            a[p][n] = '*', a[r][n] = '*';
        else if (q == s && q == n)
            a[p][1] = '*', a[r][1] = '*';
        else
            a[r][q] = '*', a[p][s] = '*';

        //cout << p << q << r << s << endl;
        for (ll i = 1; i <= n; i++)
        {
            for (ll j = 1; j <= n; j++)
            {
                cout << a[i][j];
            }
            cout << endl;
        }
        //cout << endl;
        //cout<<a[1][1];
    }
    return 0;
}
