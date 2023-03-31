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
        int n, i, j;
        cin >> n;
        int c[n], a = 0, b = 0, pre = 0, cur = 0, move = 0;
        for (i = 0; i < n; i++)
            cin >> c[i];
        i = 0, j = n - 1;
        while (true)
        {
            while (cur <= pre && i <= j)
                cur += c[i++];
            a += cur, pre = cur, cur = 0, move++;
            if (i > j)
                break;
            while (cur <= pre && i <= j)
                cur += c[j--];
            b += cur, pre = cur, cur = 0, move++;
            if (i > j)
                break;
        }
        cout << move << " " << a << " " << b << endl;
    }
    return 0;
}
