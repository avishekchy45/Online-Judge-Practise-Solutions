#include<stdio.h>
int main()
{
    long long int H,O;
    while(scanf("%lld %lld", &H, &O) != EOF)
    {
        if(H>O)
            printf("%lld\n",H-O);
        else
            printf("%lld\n",O-H);
    }
    return 0;
}
