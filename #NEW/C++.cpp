/*
** Author: MAC45
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    freopen("input.txt", "rt", stdin);
    freopen("output.txt","wt", stdout);
    ll t, tc = 0;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        cout << n << endl;
        printf("Case %lld: %lld\n", ++tc, n);
    }
    cout << "Done in " << clock() / CLOCKS_PER_SEC << "sec" << endl;
    return 0;
}
