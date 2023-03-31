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
        int n;
        cin >> n;
        if (n > 3)
        {
            int i = (n % 2 == 0) ? 2 : 1;
            for (; i <= n; i += 2)
                cout << i << " ";
            cout << i - 5 << " ";
            cout << i - 3 << " ";
            for (i -= 7; i >= 1; i -= 2)
                cout << i << " ";
            cout << endl;
        }
        else
            cout << -1 << endl;
    }
    return 0;
}
