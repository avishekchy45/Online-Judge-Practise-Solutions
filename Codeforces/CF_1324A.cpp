#include<bits/stdc++.h>
using namespace std;
main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        if(n==1)
        {
            cout<<"YES"<<endl;
            continue;
        }
        sort(a,a+n);
        int p=0;
        for(int i=1; i<n; i++)
        {
            if((a[i]-a[0])%2==0)
                p++;
        }
        if(p==n-1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
