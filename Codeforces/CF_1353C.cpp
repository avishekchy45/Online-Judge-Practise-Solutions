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
        ll n, moves = 0;
        cin >> n;
        n = n / 2;
        cout << (n * (n + 1) * (2 * n + 1) / 6) * 8 << endl;
    }
    return 0;
}
