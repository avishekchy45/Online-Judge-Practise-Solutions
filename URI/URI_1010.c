#include <stdio.h>
int main()
{
 int code,units;
 double price,value;
 scanf("%d %d %lf", &code, &units, &price);
 value=units*price;
 scanf("%d %d %lf", &code, &units, &price);
 value+=units*price;
 printf("VALOR A PAGAR: R$ %.2lf\n", value);
}
