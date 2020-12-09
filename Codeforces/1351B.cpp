/*
** Author: MAC45
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    cout.tie(0);
    //freopen("input.txt", "rt", stdin);
    //freopen("output.txt","wt",stdout);
    ll t, a1, b1, a2, b2;
    cin >> t;
    while (t--)
    {
        bool s = false;
        cin >> a1 >> b1 >> a2 >> b2;
        if (a1 == a2 && b1 + b2 == a1)
            s = true;
        else if (a1 == b2 && b1 + a2 == a1)
            s = true;
        else if (b1 == a2 && a1 + b2 == b1)
            s = true;
        else if (b1 == b2 && a1 + a2 == b1)
            s = true;
        if (s)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
