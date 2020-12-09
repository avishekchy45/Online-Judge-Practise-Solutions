/*
** Author: MAC45
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    cout.tie(0);
    //freopen("input.txt", "rt", stdin);
    //freopen("output.txt","wt",stdout);
    ll X, Y = 0, deposit = 100;
    cin >> X;
    while (deposit < X)
    {
        deposit += deposit * 0.01;
        Y++;
    }
    cout << Y << endl;
    return 0;
}
