#include<bits/stdc++.h>
using namespace std;

main()
{
    int T;
    cin>>T;
    for(int x=1; x<=T; x++)
    {
        getchar();
        long long int N,d,sum=0;
        cin>>N;
        for(int i=0; i<N; i++)
        {
            cin>>d;
            if(d>0)
                sum+=d;
        }
        printf("Case %d: %lld\n",x,sum);
    }
    return 0;
}
