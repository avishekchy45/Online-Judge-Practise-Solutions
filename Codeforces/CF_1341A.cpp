/*
** Author: MAC45
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    //freopen("input.txt", "rt", stdin);
    //freopen("output.txt", "wt", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b, c, d;
        cin >> n >> a >> b >> c >> d;
        int l_one = a - b, h_one = a + b, l_total = c - d, h_total = c + d;
        if (n * l_one > h_total || n * h_one < l_total)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}

//7 17 23  83 119