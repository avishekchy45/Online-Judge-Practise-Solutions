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
    ll t, tc = 0;
    cin >> t;
    while (t--)
    {
        ll n, two = 0, three = 0;
        cin >> n;
        while (n != 1)
        {
            if (n % 2 == 0)
                n = n / 2, two++;
            else if (n % 3 == 0)
                n = n / 3, three++;
            else
            {
                n = -1;
                break;
            }
        }
        if (n == -1 || two > three)
            cout << -1 << endl;
        else
            cout << (three - two) + three << endl;
    }
    return 0;
}
