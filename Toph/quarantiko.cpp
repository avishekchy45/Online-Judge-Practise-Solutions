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
    //freopen("input.txt","rt",stdin);
    //freopen("outut.txt","wt",stdout);
    ll N,i,j;
    cin>>N;
    ll a[N],c[N],q[N];
    for(i=0; i<N; i++)
        cin>>a[i];
    cin>>c[0];
    if(c[0]>=N)
        a[0]==1?q[0]=0:q[0]=1;
    else
        q[0]=a[0];
    for(i=1,j=N; i<N; i++,j--)
    {
        cin>>c[i];
        if(c[i]==c[i-1])
        {
            a[i]==1?q[i]=0:q[i]=1;
            continue;
        }
        q[i]=a[i];
    }
    for(i=0; i<N; i++)
        cout<<q[i]<<" ";
    return 0;
}
