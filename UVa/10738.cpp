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
        ll a, b;
        scanf("%lld", &a);
        scanf("%lld", &b);
        ll sum = 0;
        if (a % 2 == 0)
            a += 1;
        for (ll i = a; i <= b; i += 2)
            sum += i;
        printf("Case %lld: %lld\n", ++tc, sum);
    }
    return 0;
}
