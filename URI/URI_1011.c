#include<stdio.h>
int main()
{
    int R;
    double Volume;
    scanf("%d", &R);
    Volume=((4.0/3)*3.14159*R*R*R);
    printf("VOLUME = %.3lf\n", Volume);
}
