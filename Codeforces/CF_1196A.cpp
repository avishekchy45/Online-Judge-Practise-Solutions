#include<bits/stdc++.h>
int main()
{
    int q;
    long long int a,b,c;
    scanf("%d",&q);
    long long int sum[q];
    for(int i=0; i<q; i++)
    {
        scanf("%lld %lld %lld",&a,&b,&c);
        sum[i]=(a+b+c)/2;
    }
    for(int i=0; i<q; i++)
        printf("%lld\n",sum[i]);

    return 0;
}

