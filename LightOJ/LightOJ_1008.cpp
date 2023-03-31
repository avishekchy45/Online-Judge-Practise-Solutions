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
    ll T,S;
    cin>>T;
    for(ll x=1; x<=T; x++)
    {
        cin>>S;
        ll C=ceil(sqrt(S));
        ll R=S-(C-1)*(C-1);
        if(C%2==0)
        {
            if(R>C)
                printf("Case %lld: %lld %lld\n",x,C,1+C*C-S);
            else
                printf("Case %lld: %lld %lld\n",x,R,C);
        }
        else
        {
            if(R>C)
                printf("Case %lld: %lld %lld\n",x,1+C*C-S,C);
            else
                printf("Case %lld: %lld %lld\n",x,C,R);
        }
    }
    return 0;
}
