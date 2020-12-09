#include<bits/stdc++.h>
using namespace std;
main()
{
    int t,m,n;
    cin>>t;
    while(t--)
    {
        int c=0;
        cin>>n>>m;
        if(n%m==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
