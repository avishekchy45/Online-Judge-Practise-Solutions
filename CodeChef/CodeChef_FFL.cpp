/*
** Author: MAC45
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    //freopen("input.txt","rt",stdin);
    //freopen("outut.txt","wt",stdout);
    int T;
    cin>>T;
    while(T--)
    {
        int N,S;
        cin>>N>>S;
        S=100-S;
        int P[N+1],C,fo=101,de=101;
        for(int i=0; i<N; i++)
            cin>>P[i];
        for(int i=0; i<N; i++)
        {
            cin>>C;
            if(C==1)
                fo=min(P[i],fo);
            else
                de=min(P[i],de);
        }
        //cout<<fo<<" "<<de<<" "<<S<<endl;
        if(fo+de<=S)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}
