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
        if (k < n)
        {
            cout << k << endl;
            continue;
        }
        int rem = k % (n - 1);
        int add = k / (n - 1);
        if (rem == 0)
            add -= 1;
        cout << k + add << endl;
    }
    return 0;
}
