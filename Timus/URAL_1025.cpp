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
    //freopen("output.txt", "at", stdout);
    ll n, sum = 0;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    n = n / 2 + 1;
    for (ll i = 0; i < n; i++)
        sum += a[i] / 2 + 1;
    cout << sum << endl;
    return 0;
}

int fun(int n)
{
    return 0;
}