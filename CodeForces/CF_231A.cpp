/*
** Author: MAC45
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    // freopen("input.txt", "rt", stdin);
    // freopen("output.txt", "wt", stdout);
    int n;
    cin >> n;
    ll problems = 0;
    while (n--)
    {
        ll p, v, t;
        cin >> p >> v >> t;
        if (p + v + t > 1)
            problems += 1;
    }
    cout << problems << endl;
    return 0;
}
