/*
** Author: MAC45
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    //freopen("input.txt", "rt", stdin);
    //freopen("output.txt","wt", stdout);
    ll n;
    cin >> n;
    ll a[n], i, sum = 0;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    sort(a, a + n, greater<int>());
    ll taken = 0;
    for (i = 0; i < n; i++)
    {
        taken += a[i];
        if (2 * taken > sum)
            break;
    }
    cout << i+1 << endl;
    return 0;
}
