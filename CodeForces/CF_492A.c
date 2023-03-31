#include<stdio.h>
int main()
{
long long n,i,l=0,max=0,sum=0;
scanf("%lld",&n);
if(n==1)
printf("1\n");
else{
for(i=1;i<=n;i++)
{
if(max>n)
break;
else
l++;
sum+=i;

max+=sum;

}
printf("%lld\n",l-1);
}
return 0;
}
