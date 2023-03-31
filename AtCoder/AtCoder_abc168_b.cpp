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
    ll S;
    string K;
    cin >> S >> K;
    if (K.size() <= S)
        cout << K << endl;
    else
    {
        for (int i = 0; i < S; i++)
            cout << K[i];
        cout << "..." << endl;
    }
    return 0;
}
