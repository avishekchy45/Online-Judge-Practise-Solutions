/*
** Author: MAC45
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
main()
{
    ll t,tcase=1;
    cin>>t;
    while(t--)
    {
        ll b,p,f,h,c,profit=0;
        cin>>b>>p>>f>>h>>c;
        if(b==1)
        {
            cout<<profit<<endl;
            continue;
        }
        b=b/2;
        if(h<c)
            swap(p,f),swap(h,c);
        if(b>p||b==p)
            profit+=h*p,b-=p;
        else
            profit+=h*b,b-=b;
        if(b>f||b==f)
            profit+=c*f;
        else
            profit+=c*b;
        cout<<profit<<endl;
    }
    return 0;
}
