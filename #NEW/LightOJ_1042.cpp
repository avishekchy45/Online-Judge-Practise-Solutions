#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;

int onoroy(long long int N);

main()
{
    int T;
    long long int N,value;
    cin>>T;
    for(int x=1; x<=T; x++)
    {
        cin>>N;
        value=onoroy(N);
        while(1)
        {
            if(value==onoroy(++N))
            {
                printf("Case %d: %lld\n",x,N);
                break;
            }
        }
    }
}

int onoroy(long long int N)
{
    long long int none=0;
        while(N>0)
        {
            if(N%2==1)
                none++;
            N=N/2;
        }
    return none;
}
