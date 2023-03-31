#include<stdio.h>

int main()
{
    int T,r[5],r2[5],total,total2;
    scanf("%d",&T);
    for(int i=0; i<T; i++)
    {
        scanf("%d %d %d %d",&r[0],&r[1],&r[2],&r[3]);
        total=r[0]+r[1]-r[2]-r[3];
        scanf("%d %d %d %d",&r2[0],&r2[1],&r2[2],&r2[3]);
        total2=r2[0]+r2[1]-r2[2]-r2[3];
        if(total<=0||total2<=0)
            printf("Miss\n");
        else
            printf("Banglawash\n");
    }
    return 0;
}

