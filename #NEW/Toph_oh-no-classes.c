#include<stdio.h>
main()
{
    int T;
    scanf("%d",&T);
    for(int i=0; i<T; i++)
    {
        int a[4],b[4];
        for(int j=0; j<3; j++)
            scanf("%d %d",&a[j],&b[j]);
        int start=a[0],end=b[0];
        for(int j=0; j<3; j++)
        {
            if(a[j]<start)
                start=a[j];
            if(b[j]>end)
                end=b[j];
        }
        printf("%d\n",end-start+1);
    }
    return 0;
}
