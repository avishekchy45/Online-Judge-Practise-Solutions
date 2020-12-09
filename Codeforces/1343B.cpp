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
        ll n,sum1=0,sum2=0;
        cin>>n;
        if(n%4!=0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        else
        {
            cout<<"YES"<<endl;
            for(ll i=2; i<=n; i+=2)
            {
                cout<<i<<" ";
                sum1+=i;
            }
            for(ll i=1; i<n-1; i+=2)
            {
                cout<<i<<" ";
                sum2+=i;
            }
            cout<<sum1-sum2<<" "<<endl;
        }
    }
    return 0;
}

