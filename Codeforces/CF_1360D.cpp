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
        ll n, k;
        cin >> n >> k;
        if (k > n || k == n)
        {
            cout << 1 << endl;
            continue;
        }
        ll minv = 1;
        for (ll i = sqrt(n); i > 1; i--)
        {
            if (n % i == 0)
            {
                if (n / i < k || n / i == k)
                    minv = n / i > minv ? n / i : minv;
                else if (i < k || i == k)
                    minv = i > minv ? i : minv;
            }
        }
        cout << n / minv << endl;
    }
    return 0;
}
