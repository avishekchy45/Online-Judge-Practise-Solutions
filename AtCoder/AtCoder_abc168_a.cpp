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
    ll N, tc = 0;
    cin >> N;
    N = N % 10;
    if (N == 3)
        cout << "bon" << endl;
    else if (N == 0 || N == 1 || N == 6 || N == 8)
        cout << "pon" << endl;
    else
        cout << "hon" << endl;
    return 0;
}
