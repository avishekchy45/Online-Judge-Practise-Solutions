#include<stdio.h>
int main()
{
    int n,S,m,i,flag,count=0;
    scanf("%d %d",&n,&S);
    for(i=1; i<=S; i++)
    {
        flag=0;
        m=n*i;
        {
            if(m=S||m<(S+n))
            {
                flag=1;
                continue;
            }
            else
                break;
        }
        if (flag == 1)
            {
                count++;
            }
    }
    printf("%d\n",count);

}
