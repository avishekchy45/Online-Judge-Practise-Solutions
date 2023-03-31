#include<stdio.h>
main()
{
    int a,b,divisor,common=0;
    scanf("%d %d",&a,&b);
    //(divisor=a)&&(divisor=b);
    if(a<b)
        divisor=a;
    else
        divisor=a;
    while(divisor>0)
    {
        if((a%divisor==0)&&(b%divisor==0))
            common++;
        divisor--;
    }
    printf("%d",common);
}
