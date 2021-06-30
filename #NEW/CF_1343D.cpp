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
        ll n,k,r=0,i,j=1;
        cin>>n>>k;
        r=n/2;
        ll a[n+1],sum1[(n/2)+1],sum2[(n/2)+1];
        for(i=1; i<=(n/2)+1; i++)
            cin>>a[i];
        sum1[j]=a[i-1]+a[n-i+2];
        sum2[j]=sum1[j]+k-min(a[i-1],a[n-i+2]);
        j++;
        for(; i<=n; i++)
        {
            cin>>a[i];
            sum1[j]=a[i]+a[n-i+1];
            sum2[j]=sum1[j]+k-min(a[i],a[n-i+1]);
            j++;
        }
        for(i=1; i<=n/2; i++)
        {
            for(j=1; j<=n/2; j++)
            {
                if(sum1[i]==sum2[j])
                {
                    r--;
                    break;
                }
            }
        }
        cout<<r<<endl;
    }
    return 0;
}

