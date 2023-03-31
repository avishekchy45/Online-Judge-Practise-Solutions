#include <stdio.h>
#include<math.h>
int main ()
{
    int i, j, n;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        long long int cx, cy, r, px, py, d;
        scanf("%lld %lld %lld %lld %lld", &cx, &cy, &r, &px, &py);
        d = sqrt(pow(cx - px, 2) + pow(cy - py, 2));
        if(d < r)
            printf("Case %d: %s\n", i, "yes");
        else
            printf("Case %d: %s\n", i, "no");
    }
    return 0;
}
