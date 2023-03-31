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
    ll n, num = 0;
    cin >> n;
    ll arr[n][n];
    for (ll i = 0, j = n - 1; i < n;)
    {
        for (ll k = i, l = j;; k++, l++)
        {
            arr[k][l] = ++num;
            if (k == n - 1 || l == n - 1)
                break;
        }
        if (j == 0)
            i++;
        if (j > 0)
            j--;
    }
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    return 0;
}

int fun(int n)
{
    return 0;
}
