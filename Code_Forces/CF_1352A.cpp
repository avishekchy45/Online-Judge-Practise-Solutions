/*
** Author: MAC45
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //freopen("input.txt", "rt", stdin);
    //freopen("output.txt","wt",stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int n, digit = 0, rem;
        cin >> n;
        int a[n];
        for (ll i = 1, j = 1; n > 0; i *= 10)
        {
            rem = n % 10;
            n = n / 10;
            if (rem > 0)
                digit++, a[j] = rem * i, j++;
        }
        cout << digit << endl;
        for (ll i = 1; i <= digit; i++)
            cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}
