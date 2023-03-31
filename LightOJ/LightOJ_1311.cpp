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
    //freopen("output.txt","wt",stdout);
    ll t, tc = 0;
    cin >> t;
    while (t--)
    {
        double v1, v2, v3, a1, a2, d1, d2;
        cin >> v1 >> v2 >> v3 >> a1 >> a2;
        d1 = (v1 * v1) / (2 * a1) + (v2 * v2) / (2 * a2);
        d2 = v3 * max(v1 / a1, v2 / a2);
        printf("Case %lld: %lf %lf\n", ++tc, d1, d2);
    }
    return 0;
}

int fun(int n)
{
    return 0;
}