/*
** Author: MAC45
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
main()
{
    ll N,M;
    cin>>N;
    ll A[N+1]= {0};
    for(int i=1; i<N; i++)
    {
        cin>>M;
        A[M]++;
    }
    for(int i=1; i<=N; i++)
        cout<<A[i]<<endl;
    return 0;
}
