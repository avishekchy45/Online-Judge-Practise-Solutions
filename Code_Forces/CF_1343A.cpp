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

    int t;
    cin>>t;
    while(t--)
    {
        ll n,x,k,sum=1;
        cin>>n;
        for(ll k=1;;k++)
        {
            sum+=pow(2,k);
            if(n%sum==0)
                break;
        }
        cout<<n/sum<<endl;
    }
    return 0;
}

