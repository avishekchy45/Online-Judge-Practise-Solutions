#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,m,q,a,b;
    cin>>n>>m;
    string s[n],t[m];
    for(int i=0; i<n; i++)
        cin>>s[i];
    for(int i=0; i<m; i++)
        cin>>t[i];
    cin>>q;
    int y[q];
    for(int i=0; i<q; i++)
        cin>>y[i];
    for(int i=0; i<q; i++)
    {
        a=y[i]%n;
        b=y[i]%m;
        if(a==0)
            a=n;
        if(b==0)
            b=m;
        cout<<s[a-1]<<t[b-1]<<endl;
    }
    return 0;
}
//Accepted
