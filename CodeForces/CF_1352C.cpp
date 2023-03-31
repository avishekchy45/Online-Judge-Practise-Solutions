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
        int n, k, rem;
        cin >> n >> k;
        rem = k % (n - 1);
        if (rem == 0)
            rem = -1;
        cout << (k / (n - 1)) * n + rem << endl;
    }
    return 0;
}
