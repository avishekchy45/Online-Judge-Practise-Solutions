#include<bits/stdc++.h>
using namespace std;

main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        int x,group,ungroup,same=0,duplicate=0,mini=1;
        cin>>n;
        int a[n+1],mini2=n;
        for(int i=0; i<n; i++)
            cin>>a[i];
        if(n==1)
        {
            cout<<0<<endl;
            continue;
        }
        sort(a,a+n);
        for(int i=0; i<n-1; i++)
        {
            if(a[i]==a[i+1])
            {
                same++;
                for(int j=i; j<n-1; j++)
                    if(a[i]==a[j+1])
                        duplicate++,mini++,i++;
                mini2=min(mini,mini2);
            }
            //if(same>=1)
            //  mini2=min(mini,mini2);
            //else
            //  mini2=mini;
            mini=1;
        }
        group=n-duplicate;
        ungroup=mini2;
        x=min(group,ungroup);
        if(group==ungroup)
            x-=1;
        cout<<x<<endl;
    }
    return 0;
}


