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
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "rt", stdin);
    //freopen("output.txt","wt",stdout);
    ll t, tc = 0;
    cin >> t;
    while (t--)
    {
        int N, x[2] = {0}, a = 0;
        cin >> N;
        int A[N];
        char S[N];
        for (ll i = 0; i < N; i++)
            cin >> A[i];
        for (ll i = 0; i < N; i++)
            cin >> S[i];
        for (ll i = 0; i < N; i++)
            a ^= A[i], x[S[i] - 48] = a;
        if (!x[0] && x[1])
            cout << 0 << endl;
        else
            cout << 1 << endl;
        printf("Case %lld: %d %d\n", ++tc, x[0], x[1]);
    }
    return 0;
}

int fun(int n)
{
    return 0;
}