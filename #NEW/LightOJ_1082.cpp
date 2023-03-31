#include<bits/stdc++.h>
using namespace std;
main()
{
    int T;
    cin>>T;
    for(int i=0; i<T; i++)
    {
        //cout<<"HELLO"<<endl;
        getchar();
        int N,q;
        cin>>N>>q;
        int a[N+1],I[q+1],J[q+1],m;
        for(int k=0; k<N; k++)
            cin>>a[k];
        cout<<"Case "<<i+1<<":"<<endl;
        for(int k=0; k<q; k++)
        {
            cin>>I[k]>>J[k];
            m=a[I[k]-1];
            for(int l=I[k]-1; l<J[k]-1; l++)
                m=min(a[l],a[l+1]);
            cout<<m<<endl;
        }
    }
    return 0;
}

