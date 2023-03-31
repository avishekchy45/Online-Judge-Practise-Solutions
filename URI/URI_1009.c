#include<stdio.h>
int main()
{
  char name;
  double salary,sell,TOTAL;
  scanf("%s %lf %lf",&name,&salary,&sell);
  TOTAL = salary+sell*.15;
  printf("TOTAL = R$ %.2lf\n",TOTAL);
}
