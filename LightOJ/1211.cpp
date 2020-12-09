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
    //freopen("input.txt", "rt", stdin);
    //freopen("output.txt", "wt", stdout);
    ll t, tc = 0;
    cin >> t;
    while (t--)
    {
        ll n, i;
        cin >> n;
        ll x1[n], y1[n], z1[n], x2[n], y2[n], z2[n], v = 1;
        for (i = 0; i < n; i++)
            cin >> x1[i] >> y1[i] >> z1[i] >> x2[i] >> y2[i] >> z2[i];
        for (i = 0; i < n; i++)
        {
            if (x1[i] > x2[i])
                swap(x1[i], x2[i]);
            if (y1[i] > y2[i])
                swap(y1[i], y2[i]);
            if (z1[i] > z2[i])
                swap(z1[i], z2[i]);
            if (x1[i] > x2[0] || y1[i] > y2[0] || z1[i] > z2[0] || x2[i] < x1[0] || y2[i] < y1[0] || z2[i] < z1[0])
            {
                v=0;
                break;
            }
            x1[0] = max(x1[0], x1[i]),y1[0] = max(y1[0], y1[i]),z1[0] = max(z1[0], z1[i]);
            x2[0] = min(x2[0], x2[i]),y2[0] = min(y2[0], y2[i]),z2[0] = min(z2[0], z2[i]);
        }
        if (v == 1)
            v = (x2[0] - x1[0]) * (y2[0] - y1[0]) * (z2[0] - z1[0]);
        printf("Case %lld: %lld\n", ++tc, v);
    }
    return 0;
}

int fun(int n)
{
    return 0;
}