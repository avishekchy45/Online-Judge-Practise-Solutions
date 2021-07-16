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
    ll n, m;
    cin >> n >> m;
    ll mini = min(n, m);
    if (mini % 2 == 0)
        cout << "Malvika\n";
    else
        cout << "Akshat\n";
    return 0;
}
