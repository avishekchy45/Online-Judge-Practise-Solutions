#include<stdio.h>
int main()
{
    double a,b;
    float Media;
    while(scanf("%lf %lf",&a,&b)!=EOF){
    Media=((a*3.5)+(b*7.5))/(3.5+7.5);
    printf("MEDIA = %.5f\n",Media);
    }
}

