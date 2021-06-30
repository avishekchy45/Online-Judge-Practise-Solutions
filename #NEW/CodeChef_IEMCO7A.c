#include<stdio.h>
int main()
{
    int T,N,A[10000000],max;
    scanf("%d",&T);
    for(int i=0; i<T; i++)
    {
        scanf("%d",&N);
        for(int i=0; i<N; i++)
            scanf("%d",&A[i]);
        for (int i = 0; i < N; i++)
        {
            for (int j = i + 1; j < N; j++)
            {
                if (A[i] > A[j])
                {
                    max =  A[i];
                    A[i] = A[j];
                    A[j] = max;
                }
            }
        }
        for(int i=0; i<N; i++)
            printf("%d ",A[i]);
    }
}
