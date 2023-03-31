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
    ll n,x,a,total=0;
    cin>>n>>x;
    while(n--)
    {
        cin>>a;
        total+=a;
    }
    if(total>x)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}
