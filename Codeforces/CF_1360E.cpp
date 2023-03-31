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
        //n = n * n;
        char a[n * n + 1];
        for (i = 1; i <= n * n; i++)
            cin >> a[i];
        for (i = 1; i < n * n - n; i++)
        {
            if (i % n == 0)
                continue;
            if (a[i] == '1' && a[i + 1] != '1' && a[i + n] != '1')
                break;
        }
        if (i < n * n - n)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
