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
        int n, sum = 0, special = 0;
        cin >> n;
        int a[n+1], b[n+1] = {0};
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n - 1; i++)
        {
            sum = a[i];
            for (int j = i + 1; j < n; j++)
            {
                sum += a[j];
                if (sum > n)
                    break;
                else
                    b[sum] = 1;
            }
        }
        for (int i = 0; i < n; i++)
            special += b[a[i]];
        cout << special << "\n";
    }
    return 0;
}