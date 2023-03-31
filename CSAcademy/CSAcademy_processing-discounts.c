#include <stdio.h>

#define N 1000000
long long d[N+1];

int main()
{
    int n, i, X, A, B;
    scanf("%d %d", &n, &X);
    while (n--)
    {
        scanf("%d %d", &A, &B);
        d[A] += B;
    }
    for (i = 1; i <= N; i++)
        d[i] += d[i-1];
    for (i = X; i <= N; i++)
        if (i - d[i] < X)
            X = i - d[i];
    printf("%d\n", X);
}

