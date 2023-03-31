/*
** Author: MAC45
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
bool prftsqr(double K);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //freopen("input.txt", "rt", stdin);
    //freopen("output.txt","wt",stdout);
    ll N;
    cin >> N;
    while(N--)
    {
        double K;
        cin >> K;
        K=(2*K-2)*4+1;
        if(prftsqr(K))
            cout << "1 ";
        else
            cout << "0 ";
    }
    return 0;
}

bool prftsqr(double K)
{
    K=sqrt(K);
    if(ceil(K)-floor(K)==0)
        return 1;
    else
        return 0;
}
