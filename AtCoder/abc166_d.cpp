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
    ll X, A, B;
    cin >> X;
    for (ll i = -1000; i < 1000; i++)
    {
        for (ll j = -1000; j < 1000; j++)
        {
            if (pow(i, 5) - pow(j, 5) == X)
            {
                cout << i << " " << j << endl;
                return 0;
            }
        }
    }
}
