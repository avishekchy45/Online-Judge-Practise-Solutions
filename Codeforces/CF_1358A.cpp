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
        ll n, m;
        cin >> n >> m;
        cout << n * (m / 2) + (m % 2) * (n / 2) + (m % 2) * (n % 2) << endl;
    }
    return 0;
}
