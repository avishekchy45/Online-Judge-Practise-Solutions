/*
** Author: MAC45
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll n, i, j, ans;
ll gcd(ll a, ll b)
{
    return b ? gcd(b, a % b) : a;
}
ll exgcd(ll a, ll b, ll &x, ll &y)
{
    ll d = a;
    if (!b)
    {
        x = 1;
        y = 0;
    }
    else
    {
        d = exgcd(b, a % b, y, x);
        y -= (a / b) * x;
    }
    return d;
}
ll Inv(ll a, ll b) // exgcd inversing
{
    ll g = gcd(a, b);
    if (g != 1)
        return -1;
    ll x, y;
    exgcd(a, b, x, y);
    return (x % b + b) % b;
}
//x--= (r1*M1*(M1^-1)+r2*M2*(M2^-1)…rn*Mn*(Mn^-1)) mod M;
// M is the product of all the Mi are relatively prime p M / p [i]
// M ^ -1 modulo p [i] of the inverse element
ll CRT(ll p[], ll r[], ll n)
{
    ans = 0;
    ll M = 1;
    for (i = 0; i < n; i++)
    {
        M *= p[i];
    }
    for (i = 0; i < n; i++)
    {
        ll x, y;
        ll Mi = M / p[i];
        ans = (ans + r[i] * Mi * Inv(Mi, p[i])) % M;
    }
    if (ans < 0)
        ans += M;
    return ans;
}
int main()
{
    freopen("input.txt", "rt", stdin);
    freopen("output.txt", "wt", stdout);
    ll T, tc = 0;
    cin >> T;
    while (T--)
    {
        cin >> n;
        ll p[n], r[n];
        for (i = 0; i < n; i++)
            cin >> p[i] >> r[i];
        if (CRT(p, r, n))
            printf("Case %lld: %lld\n", ++tc, ans);
        else
            printf("Case %lld: Impossible\n", ++tc);
    }
    cout << "Done in " << clock() / CLOCKS_PER_SEC << "sec" << endl;
    return 0;
}

