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
        ll n;
        cin >> n;
        ll a[n + 1], index;
        for (ll i = 1; i <= n; i++)
            cin >> a[i];
        for (ll i = 3; i <= n; i++)
        {
            if (a[i] - a[i - 1] == 0 && a[i-1] - a[i - 2] != 0)
            {
                index = i-2;
                break;
            }
            else if (a[i] - a[i - 1] != 0 && a[i-1] - a[i - 2] != 0)
            {
                index = i-1;
                break;
            }
            else if (a[i] - a[i - 1] != 0 && a[i-1] - a[i - 2] == 0)
            {
                index = i;
                break;
            }
        }
        cout << index << endl;
    }
    return 0;
}