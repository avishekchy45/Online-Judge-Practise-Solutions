#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
    return(n==1||n==0)?1:fact(n-1)*n;
}

main()
{
    int N,M,p=0;
    cin>>N>>M;
    if(N>1)
        p+=(N*(N-1)/2);
    if(M>1)
        p+=(M*(M-1)/2);
    cout<<p<<endl;
    return 0;
}
