/*
** Author: MAC45
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define PI acos(-1)
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
        double r1, r2, h, p, v;
        cin >> r1 >> r2 >> h >> p;
        r1 = r2 + ((r1 - r2) * p) / h;
        v = (PI * p * (r1 * r1 + r2 * r2 + r1 * r2)) / 3.0;
        printf("Case %lld: %lf\n", ++tc, v);
    }
    return 0;
}

int fun(int n)
{
    return 0;
}