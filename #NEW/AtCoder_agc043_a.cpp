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
    freopen("input.txt", "rt", stdin);
    //freopen("output.txt","wt",stdout);
    ll T, tc = 0;
    cin >> T;
    while (T--)
    {
        ll N, A, B, C, D;
        cin >> N >> A >> B >> C >> D;
        ll coin = D, coin2 = D,M=N;
        while (N > 1)
        {
            if (N % 2 == 0)
                coin += A, N = N / 2;
            else if (N % 3 == 0)
                coin += B, N = N / 3;
            else if (N % 5 == 0)
                coin += C, N = N / 5;
            else
                coin += D, N += 1;
        }
        while (M > 1)
        {
            if (M % 2 == 0)
                coin2 += A, M= M / 2;
            else if (M % 3 == 0)
                coin2 += B, M = M / 3;
            else if (M % 5 == 0)
                coin2 += C, M = M / 5;
            else
                coin2 += D, M -= 1;
        }
        cout << min(coin, coin2) << endl;
    }
    return 0;
}
