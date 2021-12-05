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
    freopen("input.txt", "rt", stdin);
    freopen("output.txt", "wt", stdout);
    ll t, tc = 0;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        cout << n << endl;
        printf("Case %lld: %lld\n", ++tc, n);
    }
    //sort(A,A+3,greater<int>());
    //ll maximum = *max_element(a, a + n);
    //ll minimum = *min_element(a, a + n);
    cout << "Done in " << clock() / CLOCKS_PER_SEC << "sec" << endl;
    //cout << "Done in " << clock() / 7.33e8 << "sec" << endl;
    return 0;
}

int fun(int n)
{
    for (ll i = 0; i < 5; i++)
    {
        cout << 5 << " ";
    }
    for (ll i = 5; i > 0; i--)
    {
        cout << 5 << " ";
    }
    return 0;
}
