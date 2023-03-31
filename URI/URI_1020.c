#include<stdio.h>
int main()
{
    int N,y,m,d,r;
    scanf("%d",&N);
    y=N/365;
    r=N%365;
    m=r/30;
    d=r%30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",y,m,d);
    return 0;
}

