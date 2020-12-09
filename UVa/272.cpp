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
    string c;
    ll j = 0;
    while (getline(cin, c))
    {
        //getchar();
        ll l = c.size();
        for (ll i = 0; i < l; i++)
        {
            if (c[i] == '"')
            {
                if (j % 2 == 0)
                    cout << "``";
                else
                    cout << "''";
                j++;
            }
            else
                cout << c[i];
        }
        printf("\n");
    }
    return 0;
}
