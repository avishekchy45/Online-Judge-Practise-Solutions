#include<bits/stdc++.h>
using namespace std;
main()
{
    int T;
    cin>>T;
    for(int x=1; x<=T; x++)
    {
        long long int a,b,c;
        cin>>a>>b>>c;
        long long int A=a*a,B=b*b,C=c*c;
        if(A==B+C||B==A+C||C==A+B)
            printf("Case %d: yes\n",x);
        else
            printf("Case %d: no\n",x);
    }
    return 0;
}
