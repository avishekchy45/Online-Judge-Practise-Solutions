#include<stdio.h>
int main()
{
    long long int A,B,sum;
    scanf("%lld %lld",&A,&B);
    //for(i=A; i<=B; i++)
        sum=(A+B)*(B-A+1)/2;
    printf("%lld\n",sum);
}
