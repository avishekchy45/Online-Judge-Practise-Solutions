/*
** Author: MAC45
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    freopen("input.txt","rt",stdin);
    //freopen("outut.txt","wt",stdout);

    int t;
    cin>>t;
    while(t--)
    {
        ll n,k,r=0,i,sum;
        cin>>n>>k;
        ll a[n+1];
        for(i=1; i<=(n/2)+1; i++)
            cin>>a[i];
        //cout<<"i="<<i<<endl;
        sum=a[i-1]+a[n-i+2];
        for(; i<=n; i++)
        {
            cin>>a[i];
            if(a[i]+a[n-i+1]!=sum)
                r++;
        }
        cout<<r<<endl;
    }
    return 0;
}


