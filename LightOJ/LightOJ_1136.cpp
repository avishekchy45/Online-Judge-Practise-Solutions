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
        ll A, B;
        cin >> A >> B;
        ll sum = 0;
        if (A % 3 == 0)
            A += 1, sum += 1;
        else if ((A + 1) % 3 == 0)
            A += 2, sum += 2;
        if ((B + 1) % 3 == 0)
            B += 1, sum -= 1;
        else if ((B + 2) % 3 == 0)
            B += 2, sum -= 2;
        sum += ((B - A + 1) * 2 / 3);
        printf("Case %lld: %lld\n", ++tc, sum);
    }
    return 0;
}

int fun(int n)
{
    return 0;
}