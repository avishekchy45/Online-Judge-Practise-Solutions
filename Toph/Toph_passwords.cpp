#include<bits/stdc++.h>
using namespace std;
main()
{
    char S[101];
    while(scanf("%s",&S)!=EOF)
    {
        int l=0,u=0,n=0,p=0;
        for(int i=0; S[i]; i++)
        {
            if(S[i]>=97&&S[i]<=122)
                l++;
            else if(S[i]>=65&&S[i]<=90)
                u++;
            else
                n++;
            if(l&&u&&n)
            {
                p++;
                l=u=n=0;
            }
        }

        printf("%d\n",p);
    }
    return 0;
}
