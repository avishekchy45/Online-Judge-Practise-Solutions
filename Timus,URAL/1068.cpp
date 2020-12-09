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
    ll N,d=1;
    cin >> N;
    if(N<1)
        d=-1,N=2-N;
    ll S=(N*(2+(N-1)*d))/2;
    cout << S << endl;
    return 0;
}

