#include <stdio.h>
#include<math.h>
int main ()
{
    int n;
    double a, b, c,s,area;
    scanf("%d",&n);
    for(int i = 1; i <= n; i++)
    {
        s=0,area=0;
        scanf("%lf %lf %lf", &a, &b, &c);
        s = (a+b+c)/2;
        area = sqrt(s * (s-a) * (s-b) * (s-c));
        printf("Case %d: %.10lf\n", i, area);
    }
    return 0;
}
