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
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        if (b > a || b == a)
            cout << b << endl;
        else if (c < d || c == d)
            cout << "-1" << endl;
        else
        {
            double baki = a - b, sleep = c - d;
            ll total = ceil(baki / sleep) * c + b;
            cout << total << endl;
        }
    }
    return 0;
}
