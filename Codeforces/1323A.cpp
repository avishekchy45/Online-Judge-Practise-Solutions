#include<bits/stdc++.h>
using namespace std;
main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int A[101];
        for(int i=0; i<n; i++)
            cin>>A[i];
        if(n==1)
        {
            if((A[0]%2)==0)
            {
                cout<<1<<endl<<1<<endl;
            }
            else
                cout<<-1<<endl;
            continue;
        }
        else
        {
            if(A[0]%2==0)
                cout<<1<<endl<<1<<endl;
            else if(A[1]%2!=0)
                cout<<2<<endl<<"1 2"<<endl;
            else
                cout<<1<<endl<<2<<endl;
            continue;
        }
    }
    return 0;
}
