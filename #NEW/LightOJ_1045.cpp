/*
** Author: MAC45
*/

//Digit of n in 10 based num sys = log10(n)+1
//So,Digit of n in b based num sys = logb(n)+1
//logb(n)=logx(n)/logx(b)=log10(n)/log10(b)
//So,logb(n!)=log10(n!)/log10(b)
//But n is too large
//log10(n!)=log10[n*(n-1)*...*1]=log10(n)+log10(n-1)+...+log10(1)

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
double logfact[1000001];
    
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "rt", stdin);
    freopen("output.txt", "wt", stdout);
    ll T, tc = 0;
    //logfact[0] = 1;
    for (ll i = 1; i <= 1000000; i++)
    {
        logfact[i] = log10(i) + logfact[i - 1];
    }
    cin >> T;
    while (T--)
    {
        ll n, base;
        cin >> n >> base;
        ll logbn = logfact[n] / log10(base);
        printf("Case %lld: %lld\n", ++tc, logbn+1);
    }
    //cout << "Done in " << clock() / CLOCKS_PER_SEC << "sec" << endl;
    return 0;
}
