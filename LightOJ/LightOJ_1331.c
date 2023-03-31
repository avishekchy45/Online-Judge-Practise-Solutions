#include <stdio.h>
#include <math.h>
int main()
{
    int i,T;
    double R1,R2,R3,a,b,c,s,area,A,B,C,result;
    scanf("%d",&T);
    for(i =0; i<T; i++)
    {
        scanf("%lf %lf %lf",&R1,&R2,&R3);
        a = R1+R2;
        b = R2+R3;
        c = R3+R1;
        s = (a+b+c)*0.5;
        area = sqrt(s*(s-a)*(s-b)*(s-c));
        A = acos((a*a+c*c-b*b)/(2.0*a*c));
        B = acos((a*a+b*b-c*c)/(2.0*a*b));
        C = acos((b*b+c*c-a*a)/(2.0*b*c));
        result = area-A*R1*R1*0.5-B*R2*R2*0.5-C*R3*R3*0.5;
        printf("Case %d: %.10lf\n",i+1,result);
    }
    return 0;
}