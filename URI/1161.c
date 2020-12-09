#include<stdio.h>

long long int Fact1(int M)
{
    if(M==0)
        return 1;
    else
        return M*Fact1(M-1);
}

long long int Fact2(int N)
{
    if(N==0)
        return 1;
    else
        return N*Fact2(N-1);
}

int main()
{
    int M,N;
    while(scanf("%d %d",&M,&N)!=EOF)
    {
        printf("%lld\n",Fact1(M)+Fact2(N));
    }
}
