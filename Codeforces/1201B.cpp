/*
** Author: MAC45
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define PI acos(-1)
int fun(int n);
int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    //cout.tie(0);
    //freopen("input.txt", "rt", stdin);
    //freopen("output.txt","wt",stdout);
    ll n, i, sum = 0;
    cin >> n;
    ll a[n + 1];
    for (i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    if (sum % 2 != 0)
    {
        cout << "NO" << endl;
        return 0;
    }
    sort(a + 1, a + n + 1);
    if (sum - a[n] < a[n])
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    return 0;
}

int fun(int n)
{
    return 0;
}
