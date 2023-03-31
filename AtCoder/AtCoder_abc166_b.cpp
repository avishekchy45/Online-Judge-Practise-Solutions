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
    ll N, K, d, A, treat = 0;
    cin >> N >> K;
    ll trick[N + 1] = {0};
    while (K--)
    {
        cin >> d;
        while (d--)
        {
            cin >> A;
            trick[A]++;
        }
    }
    while (N>0)
    {
        if (trick[N--] == 0)
            treat++;
    }
    cout << treat << endl;
    return 0;
}
