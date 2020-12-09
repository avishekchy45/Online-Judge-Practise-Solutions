/*
** Author: MAC45
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    //freopen("input.txt", "rt", stdin);
    //freopen("output.txt", "wt", stdout);
    ll n;
    while (cin >> n)
    {
        ll j[n], s[n + 1] = {0};
        bool jolly = 1;
        cin >> j[0];
        for (ll i = 1; i < n; i++)
        {
            cin >> j[i];
            s[abs(j[i - 1] - j[i])]++;
        }
        for (ll i = 1; i < n; i++)
        {
            if (s[i] != 1)
            {
                jolly = 0;
                break;
            }
        }
        if (jolly)
            cout << "Jolly" << endl;
        else
            cout << "Not jolly" << endl;
    }
    return 0;
}
