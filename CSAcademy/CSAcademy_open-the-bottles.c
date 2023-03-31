#include<stdio.h>
int main()
{
    int bottle1[3],bottle2[3],bottle3[3],time1,time2,time3;
    for(int i=0; i<3; i++)
        scanf("%d",&bottle1[i]);
    for(int i=0; i<3; i++)
        scanf("%d",&bottle2[i]);
    for(int i=0; i<3; i++)
        scanf("%d",&bottle3[i]);
    time1=bottle1[0];
    for(int i=1; i<3; i++)
    {
        if(bottle1[i]<time1)
            time1=bottle1[i];
    }

    time2=bottle2[0];
    for(int i=1; i<3; i++)
    {
        if(bottle2[i]<time2)
            time2=bottle2[i];
    }

    time3=bottle3[0];
    for(int i=1; i<3; i++)
    {
        if(bottle3[i]<time3)
            time3=bottle3[i];
    }
    printf("%d",time1+time2+time3);

}
