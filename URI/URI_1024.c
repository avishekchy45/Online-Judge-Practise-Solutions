#include<stdio.h>
#include<string.h>
int main()
{
    int N,j,k;
    char M[1001],E[1001];
    scanf("%d",&N);
    getchar();
    for(int i = 0; i < N; i++)
    {
        gets(M);
        int l = strlen(M);
        for(j=0; j<l; j++)
            if((M[j]>='A' && M[j]<='Z') || (M[j]>='a' && M[j]<='z'))
                M[j] += 3;
        for(j=0,k=l-1; j<l; j++,k--)
            E[j]=M[k];
        E[j]='\0';
        for(j = l/2; j < l; j++)
            E[j] -= 1;
        printf("%s\n",E);
    }
    return 0;
}
