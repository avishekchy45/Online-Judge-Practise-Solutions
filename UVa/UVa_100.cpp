/*
** Author: MAC45
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    //freopen("input.txt", "rt", stdin);
    //freopen("output.txt","wt",stdout);
    ll i, j;
    //cin >> i >> j;
    while (cin >> i >> j)
    {
        cout << i << " " << j << " " ;
        ll max=0;
        if (i > j)
            swap(i, j);
        for (ll m = j; m >= i; m--)
        {
            ll l = 0, n = m;
            while (1)
            {
                l++;
                if (n == 1)
                    break;
                else if (n % 2 == 0)
                    n = n / 2;
                else
                    n = 3 * n + 1;
            }
            if (l > max)
                max = l;
        }
        cout << max << endl;
    }
    return 0;
}
