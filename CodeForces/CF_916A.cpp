#include<bits/stdc++.h>
using namespace std;
main()
{
    int x,h,m,s=0;
    cin>>x>>h>>m;
    while(1)
    {
        if(h==7||m%10==7)
        {
            cout<<s<<endl;
            return 0;
        }
        m=m-x,s++;
        if(m<0)
            m+=60,h--;
    }
}
