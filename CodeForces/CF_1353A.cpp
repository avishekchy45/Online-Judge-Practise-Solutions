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

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m, v;
        cin >> n >> m;
        if (n == 1)
            cout << 0 << endl;
        else if (n == 2)
            cout << m << endl;
        else
            cout << 2 * m << endl;
    }
    return 0;
}
