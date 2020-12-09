/*
** Author: MAC45
*/

#include<bits/stdc++.h>
using namespace std;

main()
{
    float I=0,J=I+1,n=2;
    for(int num=0; num<=n; num++)
    {
        for(int i=0; i<3; i++,J++)
            printf("I=%.0f J=%.0f\n",I,J);
        if(I>=n)
            return 0;
        for(int i=0; i<12; i++,J++)
        {
            if(i%3==0)
                I+=0.2,J=I+1;
            printf("I=%.1f J=%.1f\n",I,J);
        }
        I+=0.2,J=I+1;
    }
    }
