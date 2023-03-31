#include<stdio.h>

main()
{
    int n,p[21],i,e=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&p[i]);
    for(i=1;i<n-1;i++)
    if((p[i]<p[i+1]&&p[i]>p[i-1])||(p[i]>p[i+1]&&p[i]<p[i-1]))
        e++;
    printf("%d",e);
        return 0;
}
