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
    freopen("input.txt", "rt", stdin);
    freopen("output.txt", "wt", stdout);
    ll t, tc = 0;
    cin >> t;
    while (t--)
    {
        ll n, m, sum = 0;
        cin >> n >> m;
        sum = (n / (m * 2)) * m * m;
        printf("Case %lld: %lld\n", ++tc, sum);
    }
    return 0;
}

int fun(int n)
{
    return 0;
}