#include<stdio.h>

main()
{
    int N,D,i,min=0;
    scanf("%d %d",&N,&D);
    for(int i=1; i<=N; i=i+(2*D)+1)
        min++;
    printf("%d",min);

    return 0;
}
