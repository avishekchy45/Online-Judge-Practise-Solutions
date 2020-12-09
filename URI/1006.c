#include <stdio.h>
int main()
{
   float a, b, c, Media;
   while(scanf("%f %f %f",&a,&b,&c)!=EOF){
   Media = (a/10*2) + (b/10*3) + (c/10*5);
   printf("MEDIA = %.1f\n", Media);
   }
}
