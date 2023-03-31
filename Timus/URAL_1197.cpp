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
    //freopen("input.txt", "rt", stdin);
    //freopen("output.txt", "wt", stdout);
    ll t, tc = 0;
    cin >> t;
    while (t--)
    {
        string s;
        ll ans = 8;
        cin >> s;
        if (s[0] == 'a' || s[0] == 'h')
        {
            if (s[1] == '1' || s[1] == '8')
                ans -= 6;
            else if (s[1] == '2' || s[1] == '7')
                ans -= 5;
            else
                ans -= 4;
        }
        else if (s[0] == 'b' || s[0] == 'g')
        {
            if (s[1] == '1' || s[1] == '8')
                ans -= 5;
            else if (s[1] == '2' || s[1] == '7')
                ans -= 4;
            else
                ans -= 2;
        }
        else if (s[1] == '1' || s[1] == '8')
        {
            if (s[0] == 'a' || s[0] == 'h')
                ans -= 6;
            else if (s[0] == 'b' || s[0] == 'g')
                ans -= 5;
            else
                ans -= 4;
        }
        else if (s[1] == '2' || s[1] == '7')
        {
            if (s[0] == 'a' || s[0] == 'h')
                ans -= 5;
            else if (s[0] == 'b' || s[0] == 'g')
                ans -= 4;
            else
                ans -= 2;
        }
        cout << ans << endl;
    }
    return 0;
}

int fun(int n)
{
    return 0;
}
