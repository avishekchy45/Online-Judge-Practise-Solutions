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
    int n,m;
    cin>>n>>m;
    float b,bad[n]= {0},good[n]= {0},out,free,value=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>b;
            bad[i]+=b;
        }
        bad[i]=bad[i]/100;
        good[i]=m-bad[i];
    }
    for(int i=0; i<n; i++)
    {
        cin>>out;
        value+=out*good[i];
    }
    for(int i=0; i<n; i++)
    {
        cin>>free;
        value+=free*bad[i];
    }
    cout<<value/m<<endl;
    return 0;
}
