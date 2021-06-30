#include<stdio.h>
#include<stdbool.h>

bool isprime(int n)
{
    int prime=1;
    for(int j=2; j<n/2; j++)
    {
        if(n%j==0)
            prime++;
    }
    if(prime==1)
        return 1;
    else
        return 0;
}

bool isinteresting(int n)
{
    int rem,sum=0,temp=n,nine=0;
    if(isprime(n)&&n>10)
    {
        while (temp!=0)
        {
            rem = temp%10;
            if(rem==9)
                nine++;
            sum = sum + rem;
            temp = temp/10;
        }
        if(nine==0&&isprime(sum))
            return 1;
        else
            return 0;
    }
    else
        return 0;
}

main()
{
    int T,n,prime;
    scanf("%d",&T);
    for(int i=0; i<T; i++)
    {
        scanf("%d",&n);
        if(isprime(n)&&isinteresting(n))
            printf("Case %d: Interesting Number.\n",i+1);
        else if(isprime(n)&&!isinteresting(n))
            printf("Case %d: Prime but Not Interesting Number.\n",i+1);
        else  if(!isprime(n))
            printf("Case %d: Not Prime Number.\n",i+1);

    }
    return 0;
}
