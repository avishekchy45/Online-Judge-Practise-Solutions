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
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //freopen("input.txt", "rt", stdin);
    //freopen("output.txt", "wt", stdout);
    ll n;
    cin >> n;
    ll arr[n][n];
    for (ll i = 0; i < n; i++)
        for (ll j = 0; j < n; j++)
            cin >> arr[i][j];
    for (ll i = 0, j = 0; j < n;)
    {
        {
            for (ll k = i, l = j; l <= i; k--, l++)
                cout << arr[k][l] << " ";
        }
        if (i == n - 1)
            j++;
        if (i < n - 1)
            i++;
    }
    return 0;
}

int fun(int n)
{
    return 0;
}
