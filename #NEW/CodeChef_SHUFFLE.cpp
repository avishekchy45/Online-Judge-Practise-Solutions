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
    freopen("input.txt","rt",stdin);
    //freopen("outut.txt","wt",stdout);
    int T;
    cin>>T;
    while(T--)
    {
        int K,N;
        cin>>K>>N;
        int A[K],B[K];
        for(int i=0; i<K; i++)
        {
            cin>>A[i];
            B[i]=A[i];
        }
        if(N==1)
        {
            cout<<"yes"<<endl;
            continue;
        }
        sort(B,B+K);
        bool s;
        for(int i=0; i<=K-N; i++)
        {
            s=true;
            for(int j=i; j<K; j+=N)
            {
                if(B[i]==A[i])
                {
                    s=false;
                    break;
                }
            }
            if(s)
            {
                cout<<"no"<<endl;
                break;
            }
        }
        if(!s)
        cout<<"no"<<endl;
    }
    return 0;
}

