/*
** Author: MAC45
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
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
        ll n, k = 0, j = 0;
        cin >> n;
        ll a[n + 1];
        for (ll i = 1; i <= n; i++)
            cin >> a[i];
        sort(a + 1, a + n + 1);
        for (ll i = 1; i <= n;)
        {
            if (a[i] > i)
                i = a[i];
            else
                k += i - k, i++;
        }
        cout << k + 1 << endl;
    }
    return 0;
}
