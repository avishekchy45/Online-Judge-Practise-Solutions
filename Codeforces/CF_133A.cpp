/*
** Author: MAC45
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    // freopen("input.txt", "rt", stdin);
    // freopen("output.txt","wt", stdout);
    string p;
    cin >> p;
    ll len = p.size();
    bool out = false;
    for (ll i = 0; i < len; i++)
    {
        if (p[i] == 'H' || p[i] == 'Q' || p[i] == '9')
        {
            out = true;
            break;
        }
    }
    if (out)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
