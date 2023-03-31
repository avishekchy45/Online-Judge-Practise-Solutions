#include<stdio.h>

/*int ruble();

main()
{
    int n,d,e,a,b;
    int dollar[7]= {1, 2, 5, 10, 20, 50, 100};
    int euro[7]= {5, 10, 20, 50, 100, 200};

    scanf("%d %d %d",&n,&d,&e);

    a=n-ruble(n,d,dollar);
    if(a>=d&&a!=n)
        while(a>=d)
            a=a-ruble(a,d,dollar);
    if(a!=0&&a!=n)
        a=a-ruble(a,e,euro);


    b=n-ruble(n,e,euro);
    printf("b=%d\n",b);
    if(b>e&&b!=n)
        while(b>e)
            b=b-ruble(b,e,euro);
    if(b!=0&&b!=n)
        b=b-ruble(b,d,dollar);

    printf("%d\n",(a<b)?a:b);
    printf("%d %d\n",a,b);
}

int ruble(int n,int d,int dollar[])
{
    int dtotal=0;
    for(int i=0;; i++)
    {
        if(d*dollar[i]<=n)
            dtotal=d*dollar[i];
        else if(d*dollar[i]>n)
            break;
    }
    return dtotal;
}*/

main()
{
    int n,d,e,ruble;
    scanf("%d %d %d",&n,&d,&e);
    ruble=n%d;
    for(int i=5*e;i<=n;i+=5*e)
        ruble=(ruble<((n-i)%d))?ruble:((n-i)%d);
    printf("%d",ruble);
}
