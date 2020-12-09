#include<bits/stdc++.h>
using namespace std;
#define PI acos(-1)
main()
{
    int T,n;
    double R,r,A;
    cin>>T;
    for(int x=1; x<=T; x++)
    {
        cin>>R>>n;
        A=sin(PI/n);
        r=(A/(A+1))*R;
        printf("Case %d: %lf\n",x,r);
    }
    return 0;
}
