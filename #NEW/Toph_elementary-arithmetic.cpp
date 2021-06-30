#include<stdio.h>
#include<math.h>
#define MAX 100000
int main()
{
    int A[MAX],B[MAX],sum[MAX],i,j,k,lenS1,lenS2,carry=0;
    char S1[MAX],S2[MAX];
    scanf("%s%s",&S1,&S2);
    for(lenS1=0; S1[lenS1]!='\0'; lenS1++)
        A[lenS1]=S1[lenS1]-48;
    for(lenS2=0; S2[lenS2]!='\0'; lenS2++)
        B[lenS2]=S2[lenS2]-48;
    for(i=lenS1-1,j=lenS2-1,k=0; i>=0&&j>=0; i--,j--,k++)
    {
        sum[k]=(A[i]+B[j]+carry)%10;
        carry=(A[i]+B[j]+carry)/10;
    }
    if(lenS1>lenS2)
        while(i>=0)
        {
            sum[k++]=(A[i]+carry)%10;
            carry=(A[i--]+carry)/10;
        }
    else if(lenS1<lenS2)
        while(j>=0)
        {
            sum[k++]=(B[j]+carry)%10;
            carry=(B[j--]+carry)/10;
        }
    else if (carry>0)
        sum[k++] = carry;
    for (k--; k >= 0; k--)
        printf("%d", sum[k]);
    return 0;
}
