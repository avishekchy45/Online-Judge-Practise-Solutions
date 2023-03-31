#include <stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        int n1, n2, n3, maxn = 0;
        scanf("%d %d %d", &n1, &n2, &n3);
        if(n1 >= n2 && n1 >= n3)
            maxn = n1;
        if(n2 >= n1 && n2 >= n3)
            maxn = n2;
        if(n3 >= n1 && n3 >= n2)
            maxn = n3;
        if(n3 == n2 == n1)
            maxn = n3;
        printf("Case %d: %d\n", i+1, maxn);
    }

    return 0;
}
