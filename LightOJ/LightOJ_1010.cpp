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
        ll m, n, k;
        cin >> m >> n;
        if(m>n)
            swap(m,n);
        if(m==1||n==1)
            k=m*n;
        else if(m==2&&n==2)
            k=m*n;
        else if(m==2)
        {
            if(n%2==1)
                k=n+1;
            else
            {
                if((n/2)%2==0)
                    k=n;
                else
                    k=n+m;
            }
        }
        else
            k = (m*n+1)/2;
        printf("Case %lld: %lld\n",tc++,k);
    }
    return 0;
}
