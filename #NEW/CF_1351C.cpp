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
    freopen("input.txt", "rt", stdin);
    //freopen("output.txt","wt",stdout);
    ll t, a, b;
    cin >> t;
    while (t--)
    {
        ll sum = 5;
        string s;
        cin >> s;
        ll l = s.length();
        for (ll i = 1; i < l; i++)
        {
            if ((s[i] == 'S' && s[i - 1] == 'N') || (s[i] == 'S' && s[i - 1] == 'N'))
                sum += 1;
            else if ((s[i] == 'W' && s[i - 1] == 'E') || (s[i] == 'E' && s[i - 1] == 'W'))
                sum += 1;
            else
                sum += 5;
        }
        cout << sum << endl;
    }
    return 0;
}
