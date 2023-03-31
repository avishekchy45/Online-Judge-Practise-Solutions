#include<bits/stdc++.h>
using namespace std;

main()
{
    int T;
    cin>>T;
    for(int i=1; i<=T; i++)
    {
        cout<<"Case "<<i<<":"<<endl;
        int x1,y1,x2,y2,x,y,M;
        cin>>x1>>y1>>x2>>y2>>M;
        for(int i=0; i<M; i++)
        {
            cin>>x>>y;
            if((x>x1&&x<x2)&&(y>y1&&y<y2))
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;

        }
    }
    return 0;
}

