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
        ll n, i;
        cin >> n;
        ll a[n], even = 0, odd = 0;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
                even++;
        }
        if (even % 2 == 0)
        {
            cout << "YES" << endl;
            continue;
        }
        sort(a, a + n);
        for (i = 1; i < n; i++)
        {
            if (a[i] - a[i - 1] == 1)
                break;
        }
        if (i == n)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
