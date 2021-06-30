#include<bits/stdc++.h>
using namespace std;
main()
{
    int H,N,j;
    cin>>H>>N;
    double A[N],B[N],M[N],maxi=0;
    for(int i=0;i<N;i++)
    {
        cin>>A[i]>>B[i];
        M[i]=A[i]/B[i];
        if(M[i]>maxi)
            maxi=M[i];
    }
    //cout<<maxi;
    cout<<ceil(H/maxi)<<endl;
    return 0;
}
