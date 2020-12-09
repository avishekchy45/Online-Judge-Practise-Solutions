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
        ll n, k, i = 0, j = 0;
        cin >> n >> k;
        ll a[n], b[n], sum = 0;
        for (i = 0; i < n; i++)
            cin >> a[i];
        for (i = 0; i < n; i++)
            cin >> b[i];
        sort(a, a + n);
        sort(b, b + n, greater<int>());
        //ll max = a[n - 1];
        i = 0, j = 0;
        for (i = 0; i < k; i++)
        {
            if (b[i] > a[i])
                swap(a[i], b[i]);
            else
                break;
        }
        for (int i = 0; i < n; i++)
            sum += a[i];
        cout << sum << endl;
    }
    return 0;
}
