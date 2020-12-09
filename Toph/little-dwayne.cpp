#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,D,K,N,c=0;
    cin>>T;
    for(int i=1; i<=T; i++)
    {
        cin>>D>>K;
        for(int j=1; j<=D; j++)
        {
            cin>>N;
            if(N>K)
                c+=(N-K);
            else
                c=c;
        }
        cout<<c<<endl;
        c=0;
    }
}
