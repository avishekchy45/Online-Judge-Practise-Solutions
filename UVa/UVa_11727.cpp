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
    //freopen("output.txt","wt",stdout);
    ll t, tc = 0;
    cin >> t;
    while (t--)
    {
        ll s[3];
        for (ll i = 0; i < 3; i++)
            cin >> s[i];
        sort(s,s+3);
        printf("Case %lld: %lld\n", ++tc, s[1]);
    }
    return 0;
}

int fun(int n)
{
    return 0;
}