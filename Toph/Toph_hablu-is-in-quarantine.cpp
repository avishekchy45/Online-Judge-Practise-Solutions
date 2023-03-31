/*
** Author: MAC45
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

main()
{
    ll n,x,affected=0,id;
    cin>>n;
    n=n*n;
    char grid[n+1];
    for(int i=1; i<=n; i++)
        cin>>grid[i];
    cin>>x;
    for(int i=1; i<=x; i++)
    {
        cin>>id;
        if(grid[id]=='c'||affected>0)
        {
            affected++;
            if(affected==1)
                cout<<"YES"<<endl;
            if(affected>1&&grid[id]=='a')
                cout<<id<<" ";
        }
    }
    if(affected==0)
        cout<<"NO"<<endl;
    return 0;
}
