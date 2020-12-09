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
    ll t, tc = 1;
    cin >> t;
    while (t--)
    {
        ll W, N, M;
        cin >> W;
        bool P = 0;
        for(ll i=1; i<=63; i++)
        {
            M = pow(2,i),N=W/M;
            if(W % M == 0 && N % 2 == 1)
            {
                P = 1;
                break;
            }
        }
        if (P)
            printf("Case %lld: %lld %lld\n", tc++, N, M);
        else
            printf("Case %lld: Impossible\n", tc++);
    }
    return 0;
}
