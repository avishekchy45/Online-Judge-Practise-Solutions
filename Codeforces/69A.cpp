#include<bits/stdc++.h>
int main()
{
    int n,sum=0,sum2=0,sum3=0;
    scanf("%d",&n);
    int a[n],b[n],c[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d %d %d",&a[i],&b[i],&c[i]);
        sum+=a[i];
        sum2+=a[i];
        sum3+=a[i];
    }
    if(sum==0&&sum2==0&&sum3==0)
        printf("YES");
    else
        printf("NO");

    return 0;
}

