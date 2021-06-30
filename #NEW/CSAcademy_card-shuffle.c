#include<stdio.h>
int arr1[100000],arr2[100000],arr3[100000];
int odd();
int place();

main()
{
    int N,i,j;
    long int K;
    scanf("%d %ld",&N,&K);
    for(i=1; i<=N; i++)
    {
        arr1[i]=i;
    }

    for(i=1; i<=K; i++)
    {
        odd(N,arr1);
        place(N,arr2);
    }

    for(i=1; i<=N; i++)
    {
        printf("%d ",arr1[i]);
    }
    printf("\n");


}

int odd(int N,int arr1[])
{
    int i,j=1;
    for(i=1; j<=N; i++)
    {
        arr2[i]=arr1[j];
        j+=2;
    }

    j=2;
    for(i=i; j<=N; i++)
    {
        arr2[i]=arr1[j];
        j+=2;
    }
}

int place(int N,int arr2[])
{
    int i,j=1;
    for(i=N; i>=1; i-=2)
    {
        arr1[i]=arr2[j];
        j++;
    }

    j=N;
    for(i=N-1; i>=1; i-=2)
    {
        arr1[i]=arr2[j];
        j--;
    }
}
