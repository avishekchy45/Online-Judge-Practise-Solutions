/*
** Author: MAC45
*/

#include<bits/stdc++.h>
using namespace std;
main()
{
    long long int N,K;
    cin>>N>>K;
    N=N%K;
    cout<<min(N,abs(N-K));
    return 0;
}
