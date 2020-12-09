#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin>>n;
    int a[n],d=1,m=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(i>0)
        {
            if(a[i]>a[i-1]||a[i]==a[i-1])
            {
                d++;
                if(d>m)
                    m=d;
            }
            else
                d=1;
        }
    }
    if(m==0)
        cout<<1<<endl;
    else
        cout<<m<<endl;
    return 0;
}
//Accepted
