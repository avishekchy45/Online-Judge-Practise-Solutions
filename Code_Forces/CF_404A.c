#include<stdio.h>
int main()
{
    int n,flag=0;
    scanf("%d",&n);
    getchar();
    char a[n][n];
    for(int i=0; i<n; i++)
    {
        gets(a[i]);
    }
    if(n==0)
    {
        flag=1;
    }
    if(n!=1&&n!=0)
    {
        char c=a[0][0];
        char x=a[0][1];
        for(int i=0; i<n; i++)
        {
            if(c==x)
            {
                flag=1;
                break;
            }
            if((a[i][i]!=c)||(a[i][n-i-1]!=c))
            {
                flag=1;
                break;
            }
            for(int j=0; j<n; j++)
            {
                if(j!=i&&j!=n-i-1)
                {
                    if(a[i][j]!=x)
                    {
                        flag=1;
                        break;
                    }
                }
            }
        }
    }
    if(flag==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
