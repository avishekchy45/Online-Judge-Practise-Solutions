#include<bits/stdc++.h>
using namespace std;
main()
{
    int T,Case=1;
    cin>>T;
    while(T--)
    {
        int N,hjump=0,ljump=0;
        cin>>N;
        int jump[N];
        cin>>jump[0];
        for(int i=1;i<N;i++)
            {
            cin>>jump[i];
            if(jump[i]-jump[i-1]>0)
                hjump++;
            else if(jump[i]-jump[i-1]<0)
                ljump++;
        }
        printf("Case %d: %d %d\n",Case++,hjump,ljump);
    }
    return 0;
}
