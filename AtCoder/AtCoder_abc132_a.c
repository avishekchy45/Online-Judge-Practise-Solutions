#include<stdio.h>

main()
{
    char S[5];
    int i,j,t=0;
    gets(S);
    for(i=0;i<3;i++)
        for(j=i+1;j<4;j++)
        {
            if(S[i]==S[j])
                t++;
        }
        if(t==2)
            printf("Yes");
        else
            printf("No");
        return 0;
}
