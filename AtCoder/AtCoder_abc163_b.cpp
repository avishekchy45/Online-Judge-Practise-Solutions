/*
** Author: MAC45
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
main()
{
    ll N,M,A,day=0;
    cin>>N>>M;
    while(M--)
    {
        cin>>A;
        day+=A;
    }
    if(day>N)
        cout<<-1<<endl;
    else
        cout<<N-day<<endl;
	return 0;
}
