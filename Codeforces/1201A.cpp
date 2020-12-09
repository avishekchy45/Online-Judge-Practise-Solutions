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
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    //cout.tie(0);
    //freopen("input.txt", "rt", stdin);
    //freopen("output.txt","wt",stdout);
    ll n, m, i, j, k, total = 0;
    char ans[1002][1002];
    cin >> n >> m;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            cin >> ans[i][j];
    }
    int c[m + 1];
    for (i = 0; i < m; i++)
        cin >> c[i];
    for (i = 0; i < m; i++)
    {
        int num[5] = {0};
        for (j = 0; j < n; j++)
        {
            if (ans[j][i] == 'A')
                num[0] += c[i];
            else if (ans[j][i] == 'B')
                num[1] += c[i];
            else if (ans[j][i] == 'C')
                num[2] += c[i];
            else if (ans[j][i] == 'D')
                num[3] += c[i];
            else if (ans[j][i] == 'E')
                num[4] += c[i];
        }
        sort(num, num + 5);
        total += num[4];
    }
    cout << total << endl;
    return 0;
}

int fun(int n)
{
    return 0;
}
