/*
** Author: MAC45
*/
#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops")
#pragma GCC target("avx,avx2")
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
main()
{
    int n,k,team=0,i,j;
    //cin>>n>>k;
    scanf("%d %d",&n,&k);
    int a[n+1];
    for(i=0; i<n; i++)
        //cin>>a[i];
        scanf("%d",&a[i]);
    for(i=0; i<=n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]+a[j]<k)
                team++;
        }
    }
    //cout<<team<<endl;
    printf("%lld\n",team);
    return 0;
}
