/*
** Author: MAC45
*/

#include<bits/stdc++.h>
using namespace std;
main()
{
    int N,M,p=0;
    cin>>N>>M;
    int A[N];
    float v,sum=0;
    for(int i=0; i<N; i++)
        cin>>A[i],sum+=A[i];
    sort(A,A+N);
    for(int i=N-1; i>=0; i--)
    {
        v=ceil(sum/(4*M));
        if(v<=A[i])
            p++;
        if(p==M)
        {
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
    return 0;
}
