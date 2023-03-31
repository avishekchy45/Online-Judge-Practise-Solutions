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
    ll n;
    ll a[100000];
    a[0] = 0, a[1] = 1;
    for (ll i = 1; i < 50000; i++)
    {
        a[2 * i] = a[i];
        a[2 * i + 1] = a[i] + a[i + 1];
    }
    while (1)
    {
        ll max = 0;
        cin >> n;
        if (n == 0)
            break;
        for (ll i = 0; i <= n; i++)
        {
            if (max < a[i])
                max = a[i];
        }
        cout << max << endl;
    }
    return 0;
}

int fun(int n)
{
    return 0;
}