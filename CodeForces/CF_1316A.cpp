#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,a,sum=0;
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            sum+=a;
        }
        if(sum<m)
            cout<<sum<<endl;
        if(sum>=m)
            cout<<m<<endl;
    }
    return 0;
}
