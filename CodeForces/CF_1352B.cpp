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
        int n, k;
        cin >> n >> k;
        int last = n - (k-1) * 2;
        if (last > 0 && last % 2 == 0)
        {
            cout << "YES" << endl;
            for (int i = 1; i < k; i++)
                cout << 2 << " ";
            cout << last << endl;
            continue;
        }
        last = n - (k-1);
        if (last > 0 && last % 2 != 0)
        {
            cout << "YES" << endl;
            for (int i = 1; i < k; i++)
                cout << 1 << " ";
            cout << last << endl;
            continue;
        }
        cout << "NO" << endl;
    }
    return 0;
}
