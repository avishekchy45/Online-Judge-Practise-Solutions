#include<bits/stdc++.h>
using namespace std;
#define PI acos(-1)

main()
{
    int T;
    double r,area;
    cin>>T;
    for(int x=1; x<=T; x++)
    {
        cin>>r;
        area=((r+r)*(r+r))-(PI*r*r);
        printf("Case %d: %.2lf\n",x,area);
    }
    return 0;
}
