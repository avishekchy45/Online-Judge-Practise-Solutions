/*
** Author: MAC45
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    //freopen("input.txt", "rt", stdin);
    //freopen("output.txt","wt", stdout);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n], value = 1;
        cin >> a[0];
        for (ll i = 1; i < n; i++)
        {
            cin >> a[i];
            if (a[i] * a[i - 1] > value)
                value = a[i] * a[i - 1];
        }
        cout << value << endl;
    }
    return 0;
}
