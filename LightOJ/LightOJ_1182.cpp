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
        ll n, p = 0;
        cin >> n;
        while (n > 0)
        {
            if (n % 2 == 1)
                p++;
            n = n / 2;
        }
        if (p % 2 == 0)
            printf("Case %lld: even\n", ++tc);
        else
            printf("Case %lld: odd\n", ++tc);
    }
    return 0;
}

int fun(int n)
{
    return 0;
}