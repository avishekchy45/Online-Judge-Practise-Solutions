/*
** Author: MAC45
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int fun(int n);
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "rt", stdin);
    freopen("output.txt", "wt", stdout);
    ll t, tc = 0;
    cin >> t;
    while (t--)
    {
        ll r1, c1, r2, c2;
        cin >> r1 >> c1 >> r2 >> c2;
        ll d1 = abs(r2 - r1), d2 = abs(c2 - c1);
        if (d1 == d2)
            printf("Case %lld: 1\n", ++tc);
        else if (abs(d2 % 2 - d1 % 2) == 0)
            printf("Case %lld: 2\n", ++tc);
        else
            printf("Case %lld: impossible\n", ++tc);
    }
    return 0;
}

int fun(int n)
{
    return 0;
}