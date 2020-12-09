#include<bits/stdc++.h>
using namespace std;
main()
{
    int T;
    cin>>T;
    for(int x=1; x<=T; x++)
    {
        int pos1,pos2;
        cin>>pos1>>pos2;
        //cout<<(abs(pos1-pos2)+pos1)*4+19<<endl;
        printf("Case %d: %d\n",x,(abs(pos1-pos2)+pos1)*4+19);
    }
    return 0;
}
